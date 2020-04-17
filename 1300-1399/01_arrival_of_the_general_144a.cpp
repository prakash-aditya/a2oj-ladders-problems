#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	//code logic here
	int mx = 0, mn = 0;
	for(int i=0;i<n; i++){
		if(arr[i]>arr[mx]){
			mx = i;
		}
		if(arr[i]<=arr[mn]){
			mn = i;
		}
	}

	if(mx > mn){
		cout<<mx + n - mn - 2 <<endl;
	}
	else{
		cout<<mx + n - mn - 1<<endl;
	}
	return 0;
}
