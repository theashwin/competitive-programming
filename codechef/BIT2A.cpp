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
		std::vector<uli> arr(n+5), res(n+5,0);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i = n-2;i>=0;i--){
			if(arr[i] < arr[i+1]){
				res[i] = n - i - 1;
			}else if(arr[i] == arr[i+1]){
				res[i] = res[i+1];
			}
		}
		for(int i=0;i<n;i++){
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}