#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int n,k;
		cin>>n;
		vector<long long int> v(n+1);
		for (int i = 1; i <= n; i++) {
			cin>>v[i];
		}
		cin>>k;
		k = v[k];
		sort(v.begin(),v.end());
		for (int i = 1; i <= n; i++) {
			if (v[i] == k)
				cout<<i<<endl;
		}
	}
	return 0;
}
