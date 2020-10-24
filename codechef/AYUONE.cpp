#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
	 jaadu;
	int t;
	cin>>t;
	while(t--){
		int n,k=0;
		cin>>n;
		int str[1000];
		while(n>0){
			str[k]=n%2;
			n=n/2;
			k++;
		}
		for(int i=k-1;i>=0;i--){
			cout<<str[i];
		}

		cout<<endl;
	}
	 return 0;
}

