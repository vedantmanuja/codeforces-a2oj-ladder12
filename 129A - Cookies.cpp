#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int count=0, sum=0;
	int arr[n];
	for (int i=0; i<n; i++) {
		cin>>arr[i];
		sum+=arr[i];
	}
	
	for (int j=0; j<n; j++) {
		if ((abs(sum-arr[j]))%2==0) {
			count++;
		}
	}
	cout<<count<<endl;
}