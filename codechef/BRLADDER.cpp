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
		uli a, b;
		cin>>a>>b;
		if(llabs(a-b)>2){
			cout<<"NO"<<endl;
		}else{
			if(a%2 == 0 && b%2 == 0){
				cout<<"YES"<<endl;
			}else if(a%2 != 0 && b%2 != 0){
				cout<<"YES"<<endl;
			}else{
				if(a>b){
					swap(a, b);
				}
				if(a%2 != 0 && b%2 == 0){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}