#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	string s;
	cin>>s;
	int t;
	cin>>t;
	vector<int>hash(128,0);
	for(int i=0;i<s.length();i++){
		hash[s[i]] = 1;
	}
	while(t--){
		string word;
		cin>>word;
		int flag = 0;
		for(int i=0;i<word.length();i++){
			if(hash[word[i]] == 0){
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}