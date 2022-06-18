#include <bits/stdc++.h>
using namespace std;

int main() {
	string str, str1;
	cin>>str>>str1;
	for (int i=0; i<str.size(); i++) {
		if (str[i]<92) {
			str[i] += 32;
		}
		if (str1[i]<92) {
			str1[i] += 32;
		}
	}
	if (str>str1) {
		cout<<1<<endl;
	}
	if (str<str1) {
		cout<<-1<<endl;
	}
	if (str==str1) {
		cout<<0<<endl;
	}
}