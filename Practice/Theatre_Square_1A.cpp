//#include <iostream>
//using namespace std;
//
//int main() {
//	long long int m, n, a;
//	cin >> m>> n>>a;
//	long long int tiles = (m / a) * (n / a);
//	if (m%a==0 && n%a==0) {
//		cout << tiles;
//	}
//	else if(m == a){
//		tiles = ((n / a) + (n % a));
//		cout << tiles;		
//	}
//	else if (n == a) {
//		tiles = ((m / a) + (m % a));
//		cout << tiles;
//	}
//	else {
//		if (m % a == 0)
//			tiles += m / a;
//		else if (n % a == 0)
//			tiles += n / a;
//		else {
//			tiles += (m / a) + (n / a);
//		}
//		if (m % a != 0 && n % a != 0) {
//			tiles++;
//		}
//		cout << tiles;
//	}
//}