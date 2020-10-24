#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int n;
	cin>>n;
	vector<int>arr(n);
	int evenCount = 0, oddCount = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%2==0){
			evenCount++;
		}else{
			oddCount++;
		}
	}
	if(evenCount>oddCount){
		cout<<"READY FOR BATTLE"<<endl;
	}else{
		cout<<"NOT READY"<<endl;
	}

	return 0;
}