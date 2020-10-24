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
		uli n, count = 0;
		cin>>n;
		while(n>0){
			if(n >= 100){
				count += n/100;
				n = n%100;
			}else if(n >= 50){
				count += n/50;
				n = n%50;
			}else if(n >= 10){
				count += n/10;
				n = n%10;
			}else if(n >= 5){
				count += n/5;
				n = n%5;
			}else if(n >= 2){
				count += n/2;
				n = n%2;
			}else{
				count += n;
				n = n%1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}