#include <iostream>
#include <vector>
using namespace std;

bool isEqual (vector<long long int> &a,vector<long long int> &b) {
	int n = a.size();
	for(int i = 0; i < n; i++) {
		if (a[i] != b[i])
			return false;
	}
	return true;
}

int main() {
	while(1) {
		long long int n;
		cin>>n;
		if(n == 0) {
			break;
		}
		vector<long long int> v(n+1),u(n+1);
		for (long long int i = 1; i <= n; i++) {
			cin>>v[i];
		}
		for (long long int i = 1; i <= n; i++) {
			u[v[i]] = i;
		}
		if(isEqual(v,u)) {
			cout<<"ambiguous"<<endl;
		} else {
			cout<<"not ambiguous"<<endl;
		}
	}
	return 0;
}
