#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int max_index, min_index;
	int max=0, min=1000;
	
	for (int j=0; j<n; j++){
		if (arr[j]>max) {
			max=arr[j];
			max_index=j;
		}
		if (arr[j]<=min) {
			min=arr[j];
			min_index=j;
		}
	}

	if (max_index>min_index) {
		cout << (max_index)+(n-1-min_index)-1;
	}
	else {
		cout << (max_index)+(n-1-min_index);
	}	
}
