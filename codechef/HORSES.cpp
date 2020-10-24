#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long int ll;
int main()
{
	 jaadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int diff = numeric_limits<int>::max();
	// int diff = arr[1] - arr[0];
		for(int i=0;i<n-1;i++){
			if(diff>(arr[i+1]-arr[i]))diff = arr[i+1]-arr[i];
		}
		cout<<diff<<endl;
	}
	
	 return 0;
}

