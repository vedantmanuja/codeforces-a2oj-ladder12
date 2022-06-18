#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int n2=n*n;
	int arr[n2];
	for (int i=0; i<n2; i++) {
		arr[i]=i+1;
	}
	
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n/2; j++) {
			cout<<n/2*i+arr[j]<<" ";
		}

		for (int k=0; k<n/2; k++) {
			cout<<arr[n*n-k-1]-n/2*i<<" ";
		}
		
		cout<<endl;
	}
}