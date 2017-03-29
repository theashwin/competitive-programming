#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,i,x=0,y=0;
		cin>>N;
		int X[N],Y[N];
		for(i=0;i<N;i++)
			cin>>X[i];
		for(i=0;i<N;i++)
			cin>>Y[i];
		for(i=0;i<N;i+=2)
			x=x+X[i];
		for(i=1;i<N;i+=2)
			x=x+Y[i];
		for(i=0;i<N;i+=2)
			y=y+Y[i];
		for(i=1;i<N;i+=2)
		y=y+X[i];
		x=x<y?x:y;
		cout<<x<<endl;
	}
}  