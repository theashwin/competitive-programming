#include <bits/stdc++.h>
#include <iostream>
#include <boost/integer/common_factor.hpp>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define vvl vector < vll >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int T;
	cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		ll m,n, temp=0, mini = inf;
		cin>>n>>m;
		vector<ll>arrf(n), arrp(n, 0), res(n+1, 0), basketexists(m+1,0);
		for(ll i=0;i<n;i++){
			cin>>arrf[i];
		}	
		for(ll i=0;i<n;i++){
			cin>>arrp[i];
		}		
		for(ll i =0 ;i<n;i++){
			res[arrf[i]] += arrp[i];
			if(basketexists[arrf[i]] == 0 ){
				basketexists[arrf[i]] = 1;
			}
		}
		// sort(res.begin(), res.end());
		for(ll i=1 ;i <= m;i++){
			if(basketexists[i] == 1){
				cout<<res[i]<<" ";
			
				if(res[i] != 0 && res[i] < mini){
					mini = res[i];
				}
			}
			
		}
cout<<endl;
		cout<<mini<<endl;
	}
	return 0;
}