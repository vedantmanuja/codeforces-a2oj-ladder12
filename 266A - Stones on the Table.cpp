#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n, count=0;
	cin>>n;
	
	char s[n];
	for (int i=0; i<n; i++) {
			cin>>s[i];
	}
	for (int i=0; i<n-1; i++) {
			if (s[i]==s[i+1]) {
				count++;
			}
	}
	cout<<count<<endl;
}

// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
	
// 	int n, count=0;
// 	cin>>n;
	
// 	string str;
// 	cin>>str;
// 	for (int i=0; i<n-1; i++) {
// 			if (str[i]==str[i+1]) {
// 				count++;
// 			}
// 	}
// 	cout<<count<<endl;
// }