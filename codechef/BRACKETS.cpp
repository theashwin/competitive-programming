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
		int n = s.length(), maxLen = 0, len = 0;
		for(int i=0;i<n;i++){
			if(s[i] == '('){
				len++;
			}else{
				len--;
			}
			maxLen = max(maxLen, len);
		}
		string result;
		for(int i=0;i<maxLen;i++){
			result += "(";
		}
		for(int i = 0;i<maxLen;i++){
			result += ")";
		}
		cout<<result<<endl;
	}
	return 0;
}