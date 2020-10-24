#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int l,b;
	cin>>l>>b;
	int area = l*b;
	int peri = 2 * (l+b);
	if(area>peri){
		cout<<"Area"<<endl<<area<<endl;
	}else if(area<peri){
		cout<<"Peri"<<endl<<peri<<endl;
	}else{
		cout<<"Eq"<<endl<<area<<endl;
	}
	return 0;
}