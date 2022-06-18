#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum;
	cin>>n;
	int five=0, zero=0;
	for (int i=0; i<n; i++) {
		cin>>sum;
		if (sum==5) {
			five++;
		}
		else if (sum==0) {
			zero++;
		}
	}
	
	
	if (zero==0) {
		cout<<-1<<endl;
	}

	else if (five<9) {
		cout<<0<<endl;
	}
	
	else {
		five-=five%9;
		for (int j=0; j<five; j++) {
			cout<<5;
		}
		for (int k=0; k<zero; k++) {
			cout<<0;
		}
	}
	
}