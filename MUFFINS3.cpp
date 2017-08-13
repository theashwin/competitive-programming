#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int n,a;
		cin>>n;
		a = floor(n/2) + 1;
		cout<<a<<endl;
	}
	return 0;
}
