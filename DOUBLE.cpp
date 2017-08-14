#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		int a;
		cin>>a;
		if(a%2) {
			cout<<a-1<<endl;
		} else {
			cout<<a<<endl;
		}
	}
	return 0;
}
