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
		int n, count = 0;
		cin>>n;
		std::vector<int> arr(n+5);
		std::vector<int> hash(1e2,0);
		for(int i=0;i<n;i++){
			cin>>arr[i];
			hash[arr[i]]++;
		}
		for (int i = 0; i < hash.size(); ++i)
		{
			if(hash[i] != 0){
				count++;
			}
		}
		cout<<count<<endl;

	}
	return 0;
}