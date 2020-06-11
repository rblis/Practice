#include <iostream>;
#include <math.h>

//int main() {
//	long long int a, b, c; // b!/a! = c
//	std::cin >> a >> b;
//	c = b;
//	if (a == 0 && b == 0) {// edge case since 0! is 1
//		c = 1;
//	}
//	else {
//		for (long long int k = b; k > a + 1; k--) {//reduced number of multiplications 
//			c *= k - 1;
//		}
//	}	
//	std::cout << c%10;// last digit of c
//	
//}