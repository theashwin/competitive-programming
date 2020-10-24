#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int contain3(uli n){
	int times = 0;
	while(n>0){
		if(n%10 == 3){
			times++;			
			if(times >= 3){
				return 1;
			}
		}
		n /= 10;
	}
	return 0;
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		uli n;
		cin>>n;
		for(uli i = n+1 ;;i++){
			if(contain3(i)){
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}