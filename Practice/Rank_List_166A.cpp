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

