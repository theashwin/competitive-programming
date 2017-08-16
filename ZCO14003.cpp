#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; ++i) {
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<long long int>());
	long long int max = v[0],i = 1;
	while (i < n) {
		if (max <= v[i]*(i+1)) {
			max = v[i]*(i+1);
		}
		i++;
	}
	cout<<max;
	return 0;
}
