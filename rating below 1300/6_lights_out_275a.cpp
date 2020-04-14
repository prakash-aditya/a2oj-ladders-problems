#include<bits/stdc++.h>
using namespace std;

int main() {
	//initialize vectors
	vector<vector<int>> toggle(3, vector<int> (3)), grid(3, vector<int> (3));
	//take inputs
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>toggle[i][j];
			grid[i][j] = 1;
		}
	}

	//manupulate res;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(toggle[i][j]%2){
				//toggle all the neighboring items
				grid[i][j] ^= 1;
				if(i-1>=0 && j-1>=0)
					grid[i-1][j-1] ^= 1;
				if(i-1>=0)
					grid[i-1][j] ^= 1;
				if(i-1>=0 && j+1<=2)
					grid[i-1][j+1] ^= 1;
				if(j-1>=0)
					grid[i][j-1] ^= 1;
				if(j+1<=2)
					grid[i][j+1] ^= 1;
				if(i+1<=2 && j-1>=0)
					grid[i+1][j-1] ^= 1;
				if(i+1<=2)
					grid[i+1][j] ^=1;
				if(i+1<=2 && j+1<=2)
					grid[i+1][j+1] ^= 1;
			}
		}
	}

	//print result
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<grid[i][j];
		}
		cout<<endl;
	}

	return 0;
}