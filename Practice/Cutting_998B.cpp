//Cutting - 998B
//There are a lot of things which could be cut — trees, paper, "the rope".In this problem you are going to cut a sequence of integers.
//
//There is a sequence of integers, which contains the equal number of evenand odd numbers.Given a limited budget, you need to make maximum possible number of cuts such that each resulting segment will have the same number of oddand even integers.
//
//Cuts separate a sequence to continuous(contiguous) segments.You may think about each cut as a break between two adjacent elements in a sequence.So after cutting each element belongs to exactly one segment.Say, [4, 1, 2, 3, 4, 5, 4, 4, 5, 5]
//→ two cuts →[4, 1 | 2, 3, 4, 5 | 4, 4, 5, 5]
//
//.On each segment the number of even elements should be equal to the number of odd elements.
//
//The cost of the cut between x
//and y numbers is | x−y | bitcoins.Find the maximum possible number of cuts that can be made while spending no more than B
//
//bitcoins.
//Input
//
//First line of the input contains an integer n
//(2≤n≤100) and an integer B(1≤B≤100
//
//) — the number of elements in the sequenceand the number of bitcoins you have.
//
//Second line contains n
//integers : a1, a2, ..., an(1≤ai≤100
//
//) — elements of the sequence, which contains the equal number of evenand odd numbers
//Output
//
//Print the maximum possible number of cuts which can be made while spending no more than B
//bitcoins.

#include <iostream>;
struct node {//default cost is -1, default parity is 0
	int num, cost, parity;
};

int main() {
	int n, b;
	std::cin >> n >> b;
	node* list = new node[n];
	node* ranks = new node[n];
	for (int k = 0; k < n; k++) {		
		std::cin >> list[k].num;
		list[k].cost = -1;
		list[k].parity = 0;
		if (list[k].num % 2 == 0) {//determine parity of number

			list[k].parity++;
			if (k > 0) {//combine past parities to get running total of odd and even number in the previous nodes leading upto and including the current node
				list[k].parity += list[k - 1].parity;
			}
		}
		else {
			list[k].parity--;
			if (k > 0) {
				list[k].parity += list[k - 1].parity;
			}
		}
		if (k > 0 && k%2==0) {//cost of each cut made between two even numbered node lists
			list[k].cost = (int) abs(list[k].num - list[k - 1].num);
		}
		else {
			list[k].cost = -1;
		}		
	}
	int least = 999999999, index = -1, cuts =0;
	for (int j = 2; j < n; j += 2) {//Test all the valid cut sections where parity is 0 in order based on increasing cut-cost
		for (int k = 2; k < n; k += 2) {
			if (list[k].cost >= 0 && list[k].cost < least && list[k-1].parity == 0) {
				least = list[k].cost;
				index = k;
			}
		}
		if (index != -1 && list[index].cost <= b && b >= 0) {
			cuts++;
			b -= list[index].cost;
			list[index].cost = 999999999;
			
		}
		least = 999999999;index = -1;
	}
	std::cout << cuts;
}

