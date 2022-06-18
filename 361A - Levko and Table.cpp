#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n, sum;
	cin>>n>>sum;
	int arr[n][n];

	for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (i==j) {
					arr[i][j]=sum;
				}
				else {
					arr[i][j]=0;
				}
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}