#include <iostream>
#include <vector>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while (t--) {
		std::vector<int> v(26,0);
		int holes = 0;
		v[0] = 1; v[3] = 1; v[14] = 1; 
		v[15] = 1; v[16] = 1; v[17] = 1;
		v[1] = 2;
		string a;
		cin>>a;
		for (int i = 0; i < a.length(); ++i) {
			int h = v[(int)(a.at(i) - 'A')];
			holes += h;
		}
		cout<<holes<<endl;
	}
	return 0;
}
