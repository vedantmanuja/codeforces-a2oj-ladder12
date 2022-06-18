#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int temp=INT_MAX, index=0, count=0;
	for (int i=0; i<n; i++) {
		cin>>arr[i];
 
		if (arr[i]<temp) {
			temp=arr[i];
			index=i;
			count=0;
		}
			
		else if (temp==arr[i]) {
			count++;
		}
		
	}
	
	if (count==0) {
		cout<<index+1<<endl;
		
	}
	else {
		cout<<"Still Rozdil"<<endl;
	}
	
	
}