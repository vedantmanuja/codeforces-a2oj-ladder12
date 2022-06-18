#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;

	for (int j=1; j<=k; j++) {
			cout<<n-(j-1)<<" ";
		}
	for(int i = 1; i+k<=n; i++) {
			cout<<i<<" ";
		}
        
}