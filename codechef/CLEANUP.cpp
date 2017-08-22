#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int m,n;
		cin>>m>>n;	
		vector<int> v(m);
		for (int i = 0;i <v.size();i++) {
			v[i] = i+1;
		}
		int ch;
		while(n--) {
			cin>>ch;
			v.erase(std::remove(v.begin(), v.end(), ch), v.end());   
		}
		for (int i = 0;i <v.size();i++) {
			if(i%2 == 0)
				cout<<v[i]<<" ";
		}
		cout<<endl;
		for (int i = 0;i <v.size();i++) {
			if(i%2 == 1)
				cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
