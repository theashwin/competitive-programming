#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int s,r1,r2,p;
		cin>>s;
		cin>>r1>>r2;
		cin>>p;
		long long int r = r2-r1+1,m = p%r;
		if(m!=0)
		{
			cout<<r1+m-1<<endl;	
		}
		else
		{
			cout<<r2<<endl;
		}
	}
	return 0;
}
