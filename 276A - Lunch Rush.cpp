#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n, k;
	cin>>n>>k;
	int f, t, fun=0, maxFun=INT_MIN;
	for (int i=0; i<n; i++) {
		cin>>f>>t;
		if (t>k) {
			fun = f-(t-k);
		}
		else {
			fun = f;
		}
		
		if (fun>maxFun) {
			maxFun=fun;
		}
 
	cout<<maxFun<<endl;
 
}