//Another programming contest is over.You got hold of the contest's final results table. The table has the following data. For each team we are shown two numbers: the number of problems and the total penalty time. However, for no team we are shown its final place.
//
//You know the rules of comparing the results of two given teams very well.Let's say that team a solved pa problems with total penalty time ta and team b solved pb problems with total penalty time tb. Team a gets a higher place than team b in the end, if it either solved more problems on the contest, or solved the same number of problems but in less total time. In other words, team a gets a higher place than team b in the final results' table if either pa? > pb, or pa? = pb and ta? < tb.
//
//	It is considered that the teams that solve the same number of problems with the same penalty time share all corresponding places.More formally, let's say there is a group of x teams that solved the same number of problems with the same penalty time. Let's also say that y teams performed better than the teams from this group.In this case all teams from the group share places y? + 1, y? + 2, ..., y? + x.The teams that performed worse than the teams from this group, get their places in the results table starting from the y? + x? + 1 - th place.
//
//	Your task is to count what number of teams from the given list shared the k - th place.
//	Input
//
//	The first line contains two integers n and k(1???k???n???50).Then n lines contain the description of the teams : the i - th line contains two integers pi and ti(1???pi, ti???50) — the number of solved problems and the total penalty time of the i - th team, correspondingly.All numbers in the lines are separated by spaces.
//	Output
//
//	In the only line print the sought number of teams that got the k - th place in the final results' table.


#include <iostream>
using namespace std;

struct result {
	int probs, time;
};

//void print(result *arr, int *n);



//int main(){	
//	int n, k;
//	cin >> n >> k;
//	k--;
//	result *arr;
//	arr = new result[n];
//	for (int j = 0; j < n; j++) {
//		cin >> arr[j].probs >> arr[j].time;
//	}
//
//
//	////sort by problems first
//	result temp;
//	for (int j = 0; j < n; j++) {
//		for (int i = 0; i < n-1; i++) {
//			if (arr[i].probs < arr[i + 1].probs) {//Compare number of problems solved
//				temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//
//			if (arr[i].probs == arr[i + 1].probs) {// Compare solving times if same number of problems have been solved
//				if (arr[i].time > arr[i + 1].time) {
//					temp = arr[i];
//					arr[i] = arr[i + 1];
//					arr[i + 1] = temp;
//				}
//			}
//
//		}
//	}
//	//check before and after the target to find other teams of squal standing.
//	int count = 1;
//	for (int j = 0; j < n - k; j++) {
//		if (arr[k + j].probs == arr[k + j + 1].probs && arr[k + j].time == arr[k + j + 1].time) {
//			count++;
//		}
//		else {
//			break;
//		}
//	}
//	for (int j = 0; j > k *-1 && k + j > 0 ; j--) {
//		if (arr[k + j].probs == arr[k + j - 1].probs && arr[k + j].time == arr[k + j - 1].time){
//			count++;
//		}
//		else {
//			break;
//		}
//	}
//	cout << count;
//
//}

//void print(result *arr, int *n) {
//	for (int k = 0; k < *n; k++) {
//		cout << arr[k].probs << " " << arr[k].time << "\n";
//	}
//}

