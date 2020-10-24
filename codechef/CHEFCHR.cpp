#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i=0,count[26]={0};
	cin>>t;
	cin.ignore();
	string str = "chef";
	while(str[i]!='\0')
	{
		count[str[i]-97]++;i++;
	}	
	while(t--)
	{
		char a[1000002];
		int lovely =0,len=0;
		cin>>a;
		len = strlen(a);
		for(i=0;i<=len-4;i++)
		{
			int j=i,co[26]={0},flag =1;
			while(j<(i+4))
			{
				co[a[j]-97]++;j++;
			}
			int k=0;
			while(k<26)
			{
				if(co[k]==count[k]){
					k++;
				}
				else
				{
					flag = 0;
					break;
				}
			}
			if(flag)lovely++;
		}
	//	cout<<a<<endl;
		if(lovely==0)cout<<"normal"<<endl;
		else
		{
			cout<<"lovely "<<lovely<<endl;
		}
	}
	return 0;
}
