#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	vector<long long int> v(n);
	for (long long int i = 0; i < n; i++) {
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for (long long int i = 0; i < n; i++) {
		cout<<v[i]<<endl;
	}
	return 0;
}
