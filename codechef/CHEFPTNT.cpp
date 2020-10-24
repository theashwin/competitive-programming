#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,k,e=0,odd=0,om=0,em=0,flag;
		cin>>n>>m>>x>>k;
		char s[k];
		for(int i=0;i<k;i++)
		{
			cin>>s[i];
			if(s[i]=='E')e++;
			else odd++;
		}
		        for (int i=1;i<=m;i++)
        {
            if (i%2==1)
            {
                ///cout<<"odd"<<endl;
                if (x>=odd && odd>0)
                {
                    n-=odd;
                    odd=0;
                }
                else if (x<odd)
                {
                    n-=x;
                    odd-=x;
                }
            }
            else
            {
                if (x>=e && e>0)
                {
                    n-=e;
                    e=0;
                }
                else if (x<e)
                {
                    n-=x;
                    e-=x;
                }
            }
            if (n<=0)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
	}
}
