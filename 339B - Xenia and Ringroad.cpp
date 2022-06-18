#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	int arr[m];
	long long int time=0;
	int start=1;
	
	for (int i=0; i<m; i++) {
		cin>>arr[i];
		if (arr[i]>=start) {
			time+=arr[i]-start;
			start=arr[i];
		}
		else {
			time+=n-start+arr[i];
			start=arr[i];
		}
	
	}
	cout<<time<<endl;
	
}