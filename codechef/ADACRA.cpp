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
		string s;
		cin>>s;
		int n = s.size();
		
		//change to D
		int dCount = 0;
		if(s[0] == 'U'){
			dCount++;
		}
		for(int i=1;i<n;i++){
			if(s[i-1] != s[i]){
				while(i<n && s[i] == 'D')i++;
				if(i<n && s[i-1] != s[i]){
					dCount++;
				}
			}
		}
		//change to U
		int uCount = 0;
		if(s[0] == 'D'){
			uCount++;
		}
		for(int i=1;i<n;i++){
			if(s[i-1] != s[i]){
				while(i<n && s[i] == 'U')i++;
				if(i<n && s[i-1] != s[i]){
					uCount++;
				}
			}
		}
		cout<<min(uCount,dCount)<<endl;
		
		
	}
	return 0;
}