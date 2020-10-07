#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t != 0)
    {
        string s, p, c, d, z, temp;
        int i, l, m, k = 0;
        map<char, int> mp;
        cin >> s >> p;
        l = s.length();
        m = p.length();

        if (l == m)
        {
            cout << p << endl;
        }
        else
        {
            for (i = 0; i < l; i++)
            {
                mp[s[i]]++;
            }
            for (i = 0; i < m; i++)
            {
                mp[p[i]]--;
            }

            i = 0;
            for (auto i : mp)
            {
                if (i.first == p[0] && k == 0)
                {
                    while (i.second != 0)
                    {
                        temp += i.first;
                        i.second--;
                    }
                    c += p;
                    c += temp;
                    d += temp;
                    d += p;
                    k = 1;
                }

                else if (i.first > p[0] && k == 0)
                {
                    c += p;
                    d += p;
                    k = 1;
                    while (i.second != 0)
                    {
                        c += i.first;
                        d += i.first;
                        i.second--;
                    }
                }
                else
                {
                    while (i.second != 0)
                    {
                        c += i.first;
                        d += i.first;
                        i.second--;
                    }
                }
            }
            if (k == 0)
            {
                c += p;
                d += p;
            }
            z = min(c, d);
            cout << z << endl;
        }

        t--;
    }
    return 0;
}