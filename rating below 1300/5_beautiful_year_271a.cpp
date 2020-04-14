#include<bits/stdc++.h>
using namespace std;

bool repeated_digits(int n){
	vector<int> digits;
	while(n){
		int temp = n%10;
		n /= 10;
		digits.push_back(temp);
	}
	for(int i=0; i<digits.size(); i++){
		for(int j=i+1; j<digits.size(); j++){
			if(digits[i]==digits[j]) return true;
		}
	}
	return false;
}

int main() {
	int n;
	cin>>n;
	do
	{
		n++;
		// cout<<n<<endl;
	} while (repeated_digits(n));
	cout<<n<<endl;
	return 0;
}