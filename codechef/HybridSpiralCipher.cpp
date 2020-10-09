//https://www.codechef.com/DECI2020/problems/DC10006

#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for (auto i = (a); i < (b); ++i)
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)

const int N = 1 << 10;
vector<char> M[N], T[N];

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string s, k;
    cin >> s >> k;
    int m = sz(k), n = sz(s) / m;
    assert(n * m == sz(s));

    int l = -1, r = m, u = -1, d = n;
    int x = 0, y = 0;
    for (int y = 0; y < m; ++y) M[y].resize(n);
    for (int i = 0; i < sz(s); ) {
        while (x < d) M[y][x++]= s[i++];
        l = y; --x; ++y;
        while (y < r) M[y++][x] = s[i++];
        d = x; --y; --x;
        while (x > u) M[y][x--] = s[i++];
        r = y; ++x; --y;
        while (y > l) M[y--][x] = s[i++];
        u = x; ++y; ++x;
    }
    vector<pair<char, int>> ord;
    rep(i, 0, m) ord.emplace_back(k[i], i);
    sort(all(ord));
    vector<int> val(m);
    rep(i, 0, m) val[ord[i].second] = i;
    rep(i, 0, m) T[i] = M[val[i]];
    string txt;
    rep(i, 0, n) rep(j, 0, m) if (T[j][i] != 'x') txt += T[j][i];
    int i = 0;
    for (auto x : txt) {
        cout << char(((x - 'A' - val[i]) % 26 + 26) % 26 + 'A');
        i = (i + 1) % m;
    }
}
