#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int count=0;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int best=arr[0];
	int worst=best;
	for (int j=0; j<n; j++) {
		if (arr[j]>best) {
			best=arr[j];
			count++;
		}
		else if (arr[j]<worst) {
			worst=arr[j];
			count++;
		}
	}
	cout<<count<<endl;
}