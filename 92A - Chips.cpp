#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n, m;
	cin>>n>>m;
	while (m>0) {
		for (int i=1; i<n+1; i++) {
			m=m-i;
			if (m<0) {
				cout<<m+i<<endl;
				break;
			}
			if (m==0) {
				cout<<m<<endl;
				break;
			}
			
		}
		
	}
	
	
}