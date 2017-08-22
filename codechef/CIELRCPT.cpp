#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		long long int a,c=0;
		cin>>a;
		int i = 11;
		while (a) {
			if (a >= pow(2,i)) {
				a -= pow(2,i);
				c++;
			} else if (i >= 0) {
				i--;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
