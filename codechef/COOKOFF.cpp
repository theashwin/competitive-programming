#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	uli t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<int> result(5,0);
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			if(str == "cakewalk"){
				result[0]++;
			}else if(str == "simple"){
				result[1]++;
			}else if(str == "easy"){
				result[2]++;
			}else if(str == "easy-medium" || str == "medium"){
				result[3]++;
			}else{
				result[4]++;
			}
		}
		int flag = 1;
		for(int i=0;i<5;i++){
			if(result[i] <= 0){
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			cout<<"No"<<endl;
		}else{
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}