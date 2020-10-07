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
	string s, p, res1 = "", res2 = "";
	map<char, int> cnt;

	cin >> s >> p;

	sort(s.begin(), s.end());

	for(char ch:s)
		cnt[ch]++;

	for(char ch:p)
		cnt[ch] -= 1;

	for(auto &it : cnt){
		if(it.ff < p[0])
			while(it.ss--){
				res1 += it.ff;
				res2 += it.ff;
			}
		else
			break;
	}

	res1 += p;
	for(auto &it : cnt){
		if(it.ff==p[0])
			while(it.ss--){
				res1 += it.ff;
				res2 += it.ff;
			}
		else if(it.ff > p[0])
			break;
	}
	res2 += p;

	for(auto &it : cnt)
		if(it.ff > p[0])
			while(it.ss--){
				res1 += it.ff;
				res2 += it.ff;
			}
	cout<<min(res1, res2)<<endl;	
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
