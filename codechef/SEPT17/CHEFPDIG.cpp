//INCLUDE
#include <bits/stdc++.h>
using namespace std;
//DEFINE
#define gc getchar_unlocked			//char c = gc();
#define fo(i,n) for (int i=0;i<n;i++)
#define Fo(i,k,n) for (int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--) {
		string s;
		std::vector<lli> v(10,0);
		cin>>s;
		int c = 0;
		for (int i = 0; (i < s.length()); ++i) {
			v[s[i] -'0']++;
			if((v[s[i] - '0']) == 0) {
				c++;
			}
			if((c >= 10) && (v[6] > 1) && (v[7] > 1) && (v[8]>1))
				break;
		}
		std::vector<char> l;
		for (int i = 65; i <= 90; ++i) {
			int ln = (int)(i/10);
			int rn = (i%10);
			if(v[ln] && v[rn] && ((ln == rn) ? (v[ln] > 1) : true)) {
				l.pb((char) i);
			}
		}
		for (int i = 0; i < l.size(); ++i) {
			cout<<l[i];
		}
		cout<<endl;
	}
	return 0;
}