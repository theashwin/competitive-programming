#include<bits/stdc++.h>
using namespace std;
int main()
{int n,j[100000],t=0;
cin>>n;
for(int i=0;i<n;i++)
cin>>j[i];
for(int i=0;i<n;i++)
{for(int k=1;k<=100;k++)
{t+=j[i]/pow(5,k);}
cout<<t<<endl;
t=0;}
return 0;
} 
