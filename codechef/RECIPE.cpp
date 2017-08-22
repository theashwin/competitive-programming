#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int agcd(vector<long long int> &v) {
	int r = v[0];
	int n = v.size();
	for (int i = 0, m = v[0]; i < n; i++) {
		r = gcd(r,v[i]);
	}
	return r;
}

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int n,r;
		cin>>n;
		vector<long long int> v(n);
		for (int i = 0; i < n; i++) {
			cin>>v[i];
		}
		r = agcd(v);
		while(r != 1) {
			for (int i = 0;i < n; i++) {
				v[i] = v[i] / r;
			}
			r = agcd(v);
		}
		for (int i = 0; i < n; i++) {
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
