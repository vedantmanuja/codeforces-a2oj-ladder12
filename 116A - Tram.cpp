#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n;
	cin>>n;
	int arr[n][2];
	int in_count=0, max=0;
	
		for (int i=0; i<n; i++) {
			for (int j=0; j<2; j++) {
				cin>>arr[i][j];
			}
			in_count+=arr[i][1]-arr[i][0];
			if (in_count>max) {
				max=in_count;
			}
		}
		cout<<max<<endl;		
	
}