//INCLUDE
#include <bits/stdc++.h>
using namespace std;
//DEFINE
#define gc getchar_unlocked			//char c = gc();
#define fo(i,n) for (i=0;i<n;i++)
#define Fo(i,k,n) for (i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll	long long
#define lli	long long int
#define pb	push_back
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

int main() {
	lli t;
	cin>>t;
	while(t--) {
		lli n, z;
		cin>>n>>z;
		const lli num = n;
		vector<int> v(n);
		set<lli> hash;
		int prev = -1;
		for(lli i = 0; i < n; i++) {
			cin>>v[i];
			if(prev == 0 && v[i] == 1) {
				hash.insert(i-1);
			}
			prev = v[i] == 0 ? 0 : 1;
		}

		while(z--) {
			vector<lli> toi;
			vector<lli> tod;
			for(auto i = hash.begin(); i != hash.end(); i++){
				lli x = *i;
				
				if(x == 0) {
					if(!(x+2 > n)) {
						if(v[x+2] == 1) toi.push_back(x+1);
					} 
					tod.push_back(x);
				}
				else if(x == n - 2) {
					if(v[x-1] == 0) toi.push_back(x-1);
					tod.push_back(x);
				} else {
					if(v[x-1] == 0 && v[x+2] == 0) {
						toi.push_back(x-1);
						tod.push_back(x);
					}
					else if(v[x-1] == 0 && v[x+2] == 1) {
						toi.push_back(x-1);
						toi.push_back(x+1);
						tod.push_back(x);
					}
					else if(v[x-1] == 1 && v[x+2] == 0) {
						tod.push_back(x);
					}
					else if(v[x-1] == 1 && v[x+2] == 1) {
						toi.push_back(x+1);
						tod.push_back(x);
					}
				}
			}

			for(int j = 0; j < tod.size(); j++) {
				v[tod[j]] = 1;
				v[tod[j]+1] = 0;
				hash.erase(tod[j]);
			}

			for(int j = 0; j < toi.size(); j++) {
				hash.insert(toi[j]);
			}

			cout<<"Z="<<z<<endl;
			for(auto i = 0; i < n; i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;

			if(hash.size() == 0) break;
		}
		cout<<"\nFINAL: ";
		for(auto i = 0; i < n; i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
