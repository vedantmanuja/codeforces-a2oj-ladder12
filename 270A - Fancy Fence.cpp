#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[t];
	float n;
	for (int i=0; i<t; i++) {
		cin>>arr[i];
		n=360/(180-arr[i]);

		if (arr[i]+(360/n)==180) {
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	
}