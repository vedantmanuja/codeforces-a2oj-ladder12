#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int row, col;
	cin>>row>>col;
	
	string str;
	set<int> arr1, arr2;
	for (int i=0; i<row; i++) {
		for (int j=0; j<col; j++) {
			cin>>str[j];
			if (str[j]=='S') {
				arr1.insert(i);
				arr2.insert(j);
			}
		}
	}
	cout<<row*col-arr1.size()*arr2.size()<<endl;
	
}