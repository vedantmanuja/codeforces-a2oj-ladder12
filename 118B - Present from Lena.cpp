#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	for (int i=0; i<n+1; i++) {
		for (int j=0; j<n-i; j++) {
			cout<<"  ";
		}
		for (int k=0; k<i+1; k++) {
			if (k-1==0) {
				cout<<" ";
			}
			cout<<k;
			if (k!=0) {
				cout<<" ";
			}
		}
		for (int k=0; k<i; k++) {
			cout<<i-k-1;
			if (i-k-1!=0) {
				cout<<" ";
			}
		}
		cout<<endl;
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<i+1; j++) {
			cout<<"  ";
		}
		for (int k=n-i; k>0; k--) {
			if (n-i-k-1==0) {
				cout<<" ";
			}
			cout<<n-i-k;
			if (n-i-k!=0) {
				cout<<" ";
			}
		}
		for (int k=n-i-1; k>0; k--) {
			cout<<k-1;
			if (k-1!=0) {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
}