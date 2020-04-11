#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, s;
	cin>>n>>s;
	vector<char> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//code here
	for(int i=0; i<s; i++){
		for(int i=0; i<n-1; i++){
			if(arr[i]=='B' && arr[i+1]=='G'){
				arr[i] = 'G';
				arr[i+1] = 'B';
				i++;
			}
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}
