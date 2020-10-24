#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> arr(n, vector<int>(n));
		for(int i=0;i<n;i++){
			for(int j = 0; j<=i;j++){
				cin>>arr[i][j];
			}
		}
		for(int i = n-2;i >= 0; i--){
			for(int j=0;j<=i;j++){
				arr[i][j] += max(arr[i+1][j], arr[i+1][j+1]);
			}
		}
		cout<<arr[0][0]<<endl;
	}
	return 0;
}