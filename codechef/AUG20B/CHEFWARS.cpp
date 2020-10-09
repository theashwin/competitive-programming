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
	int h,p;
	cin>>h>>p;
	int x = p*(pow(2, 1+log2(p)) - 1) / (pow(2,log2(p)));
	if( x>= h )
		cout<<"1\n";
	else
		cout<<"0\n";
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
