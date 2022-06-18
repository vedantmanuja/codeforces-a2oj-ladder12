#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y;
	cin>>n>>x>>y;
	int clones=0;
	int peopleReq=ceil((y*n)/100.0);
	
	if (peopleReq>x) {
		clones=peopleReq-x;
		cout<<clones<<endl;
	}
		
	else {
		cout<<0<<endl;
	}
}