#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int t;
	cin>>t;
	std::vector<string> seats(10, "");
	seats[1] = "LB";
	seats[2] = "MB";
	seats[3] = "UB";
	seats[4] = "LB";
	seats[5] = "MB";
	seats[6] = "UB";
	seats[7] = "SU";
	seats[0] = "SL";
	while(t--){
		int n;
		cin>>n;
		int s = n%8;
		if(s>=1 && s<=6){
			if(s<=3){
				cout<<n+3<<seats[s]<<endl;
			}else{
				cout<<n-3<<seats[s]<<endl;
			}

		}else{
			if(s == 7){
				cout<<n+1<<seats[7]<<endl;
			}else if(s == 0){
				cout<<n-1<<seats[0]<<endl;
			}
		}
	}
	return 0;
}