#include<bits/stdc++.h>
using namespace std;

#define ibs ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define mk make_pair
#define ff first
#define ss second
#define ll long long 
#define endl "\n"

void solve(){
	int n, k, ans = -1, mov = INT_MAX;
	vector<int> p;

	cin>>n>>k;
	p.resize(n);
	for(int&i:p)
		cin>>i;

	for(int i:p)
		if(k%i==0)
			if( (k/i) < mov ){
				mov = k/i;
				ans = i;
			}

	cout<<ans<<endl;
}

int main(){
	ibs
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
