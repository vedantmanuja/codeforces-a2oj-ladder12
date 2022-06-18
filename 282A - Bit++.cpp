#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	int count=0;
	string str;
	for (int i=0; i<n; i++) {
		cin>>str;
		if(str[1]=='+') {
			count+=1;
		}
		if(str[1]=='-') {
			count-=1;
		}
			
	}
	cout<<count<<endl;
}