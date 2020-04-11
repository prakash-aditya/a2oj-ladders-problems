#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	string res = "";
	for(int i=0; i<s.size(); i++){
		if(s[i]=='.'){
			res += '0';
		}
		else if(s[i+1]=='.'){
			res += '1';
			i++;
		}
		else{
			res += '2';
			i++;
		}
	}
	cout<<res<<endl;
	return 0;
}