#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int numOfDays;
		cin>>numOfDays;
		vector<int>toSolve(32, 0);
		while(numOfDays--){
			int d,p;
			cin>>d>>p;
			toSolve[d] = p;
		}
		for(int i=1;i<32;i++){
			toSolve[i] = toSolve[i] + toSolve[i-1];
		}
		int queries;
		cin>>queries;
		while(queries--){
			int req, day;
			cin>>day>>req;
			if(toSolve[day] >= req){
				cout<<"Go Camp"<<endl;
			}else{
				cout<<"Go Sleep"<<endl;
			}
		}
	}
	return 0;
}