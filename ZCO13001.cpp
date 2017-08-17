#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	std::vector<long long int> v(n);
	for (int i = 0; i < n; ++i) {
		cin>>v[i];
	}
	long long int rev = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			rev += (int) abs(v[i] - v[j]);
		}
	}
	cout<<rev;
	return 0;
}
