#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int n,sum = 0;
		cin>>n;
		while (n) {
			sum += (n % 10);
			n /= 10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
