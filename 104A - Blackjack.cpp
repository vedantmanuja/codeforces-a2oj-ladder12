#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	if (n<=10 || n>=22) {
		cout<<0;
	}
	else if (n<=19 || n==21) {
		cout<<4;
	}
	else {
		cout<<15;
	}
	
}