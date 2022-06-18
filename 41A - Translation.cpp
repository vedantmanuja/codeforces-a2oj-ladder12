#include <bits/stdc++.h>
using namespace std;

int main() {
	string str, str1;
	cin>>str>>str1;

	reverse(str1.begin(), str1.end());
	
	if (str==str1) {
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}