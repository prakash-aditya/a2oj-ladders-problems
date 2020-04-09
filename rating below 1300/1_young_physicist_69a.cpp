#include<bits/stdc++.h>

using namespace std;

int main()  {
	int n;
	cin>>n;
	// vector<int> arr(n);
	int x=0,y=0,z=0;
	for(int i=0; i<n; i++){
		int tempx, tempy, tempz;
		cin>>tempx>>tempy>>tempz;
		x+=tempx;
		y+=tempy;
		z+=tempz;
	}
	if(x==0 && y==0 && z==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
