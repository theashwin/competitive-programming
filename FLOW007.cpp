#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int num,rem, rev = 0;
		cin >> num;
		while (num) {
			rem = num % 10;
			rev = rev * 10 + rem;
			num = num / 10;
		}
		cout<<rev<<endl;
	}
	return 0;
}
