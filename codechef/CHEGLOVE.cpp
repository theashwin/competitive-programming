//https://www.codechef.com/MARCH18B/problems/CHEGLOVE
# include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{ int n,f=0,b=0;
	 cin>>n;
	 int l[n],g[n];
	 for(int j=0;j<n;j++)
	 {
	     cin>>l[j];

	 }
	 for(int j=0;j<n;j++)
	 {
	     cin>>g[j];

	 }
	 for(int j=0;j<n;j++)
	 {
	    if(g[j]>=l[j])
	    f=f+1;
	    else f=0;
	 }
	  for(int j=0,k=n-1;j<n,k>=0;j++,k--)
	   {
	       if(g[k]>=l[j])
	        b=b+1;
	        else
	        b=0;

	 }
	 if(f==n&&b!=n)
	 cout<<"front"<<endl;
	 else if(f==n&&b==n)
	 cout<<"both"<<endl;
	 else if(b==n&&f!=n)
	 cout<<"back"<<endl;
	 else if(b!=n&&f!=n)
	 cout<<"none"<<endl;
	}
return 0;
}
