#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int s, n;
	cin>>s>>n;
	int arr[n][2];
	string str="YES";
	for (int i=0; i<n; i++) {
		for (int j=0; j<2; j++) {
			cin>>arr[i][j];
		}
	}
 
	for (int j=0; j<n; j++) {
		for (int i=0; i<n-1; i++) {
			if (arr[i][0]>=arr[i+1][0]) {
				swap(arr[i], arr[i+1]);
			}
		}
	}
	
	for (int i=0; i<n-1; i++) {
		if (arr[i][0]==arr[i+1][0] && arr[i][1]<arr[i+1][1]) {
				swap(arr[i], arr[i+1]);
			}
		
	}
	
	for (int i=0; i<n; i++) {
		if (s>arr[i][0]) {
			s+=arr[i][1];
		}
		else {
			str="NO";
			break;
		}
	}
	cout<<str<<endl;
}