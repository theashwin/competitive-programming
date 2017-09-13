//INCLUDE
#include <stdio.h>
#include <vector>
using namespace std;
//DEFINE
#define gc getchar_unlocked         //char c = gc();
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll  long long
#define lli long long int
#define pb  push_back
#define pf push_front
#define mp  make_pair
#define F   first
#define S   second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626 //to pi or not to pi.
#define MOD 1000000007
#define INF 0x3f3f3f3f
//TYPEDEF
typedef pair<int, int>  pi;
typedef pair<lli, lli>  pl;
typedef vector<int>     vi;
typedef vector<lli>     vlli;
typedef vector<ll>      vl;
typedef vector<pi>      vpi;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
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

class sea {
	public:
	vector<lli> out;
	vector< vector<lli> > add;
	vector< vector<lli> > hash;
	vector<lli> t;
	vector<lli> l;
	vector<lli> r;
	lli n,m;

	sea(lli a,lli b) {
		n = a;
		m = b;
		out.resize(n+1,0);
		t.resize(m+1,0);
		l.resize(m+1,0);
		r.resize(m+1,0);
		hash.resize(b+1, std::vector<lli>(b+1, 0));
		add.push_back(out);
	}

	void create(){
		for(lli j=1;j<=m;j++){
			vector<lli> in(n+1,0);
			if(t[j] == 1){
				for(lli k=l[j]; k<= r[j]; k++){
					in[k]+=1;
				}
				add.push_back(in);
				for(lli o=1; o<=n; o++) {
					out[o] += add[j][o];
				}
			}
			else {
				if(hash[l[j]][r[j]]) {
					lli z = hash[l[j]][r[j]];
					for(lli o=1;o<=n;o++){
						in[o] = add[z][o];
					}
				} else {
				for(lli k=l[j];k<= r[j];k++){
					for(lli o=1;o<=n;o++){
						in[o]+=add[k][o];
					}
				}
			}
				hash[l[j]][r[j]] = j;
				add.push_back(in);
				for(lli o=1;o<=n;o++){
					out[o]+=add[j][o];
				 }
			}
		}
	}
};

int main() {
	lli t;
	scanf("%lld",&t);
	while(t--) {
		lli n,q;
		scanf("%lld %lld",&n,&q);
		sea S(n,q);
		for(int j=1;j<=q;j++){
			scanf("%lld %lld %lld",&S.t[j],&S.l[j],&S.r[j]);
		}
		S.create();
		for(int j=1;j<=n;j++){
			printf("%lld ",(S.out[j]%MOD));
		}
		printf("\n");
	}
	return 0;
}
