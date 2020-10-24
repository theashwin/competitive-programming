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
		uli c,d,l;
		cin>>c>>d>>l;
		uli rl = 0;
		if(l%4 == 0){
			uli maxi = (c+d)*4, mini = 0;

			if(c > d*2){
				mini = (c-d)*4;
			}else{
				mini = d*4;
			}
			if(l <= maxi && l >= mini){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}
			
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}