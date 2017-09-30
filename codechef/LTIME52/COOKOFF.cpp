//INCLUDE
#include <bits/stdc++.h>
using namespace std;
//DEFINE
#define gc getchar_unlocked			//char c = gc();
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll	long long
#define lli	long long int
#define pb	push_back
#define pf push_front
#define mp	make_pair
#define F 	first
#define S 	second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626	//to pi or not to pi.
#define MOD 1000000007
#define INF 0x3f3f3f3f
//TYPEDEF
typedef pair<int, int>	pi;
typedef pair<lli, lli>	pl;
typedef vector<int>		vi;
typedef vector<lli>		vlli;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
//FUNCTIONS
ll mpow(int base, int exp) {
	base %= MOD;
	int result = 1;
	while (exp > 0) {
		if (exp & 1) result = ((ll)result * base) % MOD;
		base = ((ll)base * base) % MOD;
		exp >>= 1;
	}
	return result;
}
 
int main() {
	lli t;
	cin>>t;
	while(t--) {
		bool flag = false;
		lli n;
		cin>>n;
		vector<lli> v(7,0);
		for(lli i = 0; i < n; i++) {
			string str;
			cin>>str;
			if(str == "cakewalk") {
				v[0]++;
			}
			else if(str =="simple") {
				v[1]++;
			}
			else if(str =="easy") {
				v[2]++;
			}
			else if(str =="easy-medium") {
				v[3]++;
			}
			else if(str =="medium") {
				v[4]++;
			}
			else if(str =="medium-hard") {
				v[5]++;
			}
			else {
				v[6]++;
			}
		}
		if((v[0] > 0 && v[1] > 0 && v[2] > 0) && (v[3] > 0 || v[4] > 0) && (v[5] > 0 || v[6] > 0))
			flag = true;
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
