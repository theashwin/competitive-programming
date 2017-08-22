#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	long long int n,h,pos = 0;
	bool hold = false;
	cin>>n>>h;
	std::vector<long long int> stack(n);
	for (int i = 0; i < n; ++i) {
		cin>>stack[i];
	}
	int a;
	while(cin>>a) {
		switch(a) {
			case 1: {
				if (pos != 0) {
					pos--;
				}
				break;
			}
			case 2: {
				if (pos != (n-1)) {
					pos++;
				}
				break;		
			}
			case 3: {
				if (!hold && (stack[pos] != 0)) {
					stack[pos]--;
					hold = true;
				}
				break;
			}
			case 4: {
				if (hold && (stack[pos] != h)) {
					stack[pos]++;
					hold = false;
				}
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		cout<<stack[i]<<" ";
	}
	return 0;
}
