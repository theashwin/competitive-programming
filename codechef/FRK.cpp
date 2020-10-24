#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
	 jaadu;
	int n,count=0;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		for(int i=0;i<str.length()-1;i++){
			cout<<str.substr(i,i+1)<<endl;
		}
	}
	 return 0;
}

