#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, m, sum=0;
	cin>>n>>m;
	int arr[n];
	
	for (int i=0; i<n; i++) {
		cin>>arr[i];
		}
	sort(arr, arr + n);
	
	for (int j=0; j<m; j++) {
		if (arr[j]<0) {
			sum+=arr[j];
		}
		
	}
	cout<<abs(sum)<<endl;
}