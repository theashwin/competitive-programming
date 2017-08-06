#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
bool isEqual (vector<int> &a,vector<int> &b) {
	int n = a.size();
	int max = 0;
	for(int i = 0; i < n; i++) {
		if (a[i] != b[i] || a[i] > 7 || a[i] < 1)
			return false;
		if ( a[i] > max) {
			max = a[i];
		}
		if (i+1 < n) {
			if ((abs(a[i] - a[i+1]) != 0) && (abs(a[i] - a[i+1]) != 1))
				return false;
		}
	}
	if (max != 7) {
		return false;
	}
	return true;
}
 
int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin>>n;
		vector<int> v(n), r(n);
		for(int i = 0,j = (n-1); i < n;i++,j--) {
			cin>>v[i];
			r[j] = v[i];
		}
		bool a = isEqual(r,v);
		if(a == true) {
			cout<<"yes"<<endl;
		} else {
			cout<<"no"<<endl;
		}
	}
	return 0;
} 
