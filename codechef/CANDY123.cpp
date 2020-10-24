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
		int a,b, ca=0, cb=0, count = 1;
		cin>>a>>b;//3 2
		while(true){
			if((ca + count)<=a){
				ca += count++;//3
			}else{
				cout<<"Bob"<<endl;
				break;
			}
			if((cb + count)<=b){
				cb += count++;//2
			}else{
				cout<<"Limak"<<endl;
				break;
			}			
		}
	}
	return 0;
}