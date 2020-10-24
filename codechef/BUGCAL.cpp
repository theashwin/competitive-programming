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
		uli result = 0;
		cin>>a>>b;
		uli place = 1;
		while(a>0 || b>0){
			int num = (a%10 + b%10)%10;
			result += place*num;
			place *= 10;
			a /= 10;
			b /= 10;
		}
		cout<<result<<endl;
	}
	return 0;
}