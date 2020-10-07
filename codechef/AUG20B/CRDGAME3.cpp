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
	int pc, pr;
	cin>>pc>>pr;

	if( ceil(pc/9.0) < ceil(pr/9.0) )
		cout<<0<<" "<<ceil(pc/9.0)<<endl;
	else
		cout<<1<<" "<<ceil(pr/9.0)<<endl;
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
