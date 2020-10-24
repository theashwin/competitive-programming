#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;

int chessboard(int r, int c, vector<vector<int>> &visited, int k){
	if(k<0){
		return 0;
	}
	if(r<1 || c<1 || r>8 || c>8){
		return 0;
	}
	else{
		
		// cout<<"come"<<"/"<<r<<"/"<<c<<endl;
		if(visited[r][c] == 1){
			return  chessboard(r, c-1, visited, k-1) + 
					chessboard(r+1, c-1, visited, k-1) +
					chessboard(r+1, c, visited, k-1) +
					chessboard(r+1, c+1, visited, k-1) +
					chessboard(r, c+1, visited, k-1) +
					chessboard(r-1, c+1, visited, k-1) +
					chessboard(r-1, c, visited, k-1) + 
					chessboard(r-1, c-1, visited, k-1);
		}
		else{
			visited[r][c] = 1;
			return 1 + chessboard(r, c-1, visited, k-1) + 
					chessboard(r+1, c-1, visited, k-1) +
					chessboard(r+1, c, visited, k-1) +
					chessboard(r+1, c+1, visited, k-1) +
					chessboard(r, c+1, visited, k-1) +
					chessboard(r-1, c+1, visited, k-1) +
					chessboard(r-1, c, visited, k-1) + 
					chessboard(r-1, c-1, visited, k-1);
				}
	}

}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int r,c,k, moves = 0;
		cin>>r>>c>>k;
		vector<vector<int>> visited(9, vector<int> (9,0));
		moves = chessboard(r,c,visited, k);
		cout<<moves<<endl;
	}
	return 0;
}