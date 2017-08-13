#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int n,m,k;
		cin>>n>>m;
		vector<bool> v(20001,false);
		v[0] = true;
		for (int i = 0; i < n; i++) {
			cin>>k;
			for (int j = m; j >= 0; j--) {
				if (v[j]) {
					v[j+k] = true;
				}
			}
		}
		if (v[m]) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
	return 0;
}
