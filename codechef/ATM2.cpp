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
		uli k;
		cin>>k;
		std::vector<uli> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		std::vector<int> result(n, 0);
		for(int i=0;i<n;i++){
			if(arr[i] <= k){
				result[i] = 1;
				k -= arr[i];
			}
		}
		for(int i=0;i<n;i++){
			cout<<result[i];
		}
		cout<<endl;
	}
	return 0;
}