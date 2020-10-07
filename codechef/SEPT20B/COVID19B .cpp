#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, a[100], n, c = 0, j, min, max, k, p;
        map<int, int> mp;
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        min = n + 1;
        max = -1;
        for (i = 1; i <= n; i++)
        {
            mp[i]++;
            c = 0;
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                {
                    if (j < i && a[j] > a[i])
                    {
                        mp[j]++;
                        for (k = i + 1; k <= n; k++)
                        {
                            if (a[j] > a[k])
                            {
                                mp[k]++;
                            }
                        }
                    }
                    else if (j > i && a[j] < a[i])
                    {
                        mp[j]++;
                        for (k = 1; k < i; k++)
                        {
                            if (a[j] < a[k])
                            {
                                mp[k]++;
                            }
                        }
                    }
                }
            }
            for (auto p : mp)
            {
                if (p.second != 0)
                {
                    c++;
                }
            }
            mp.clear();
            if (c < min)
            {
                min = c;
            }
            if (c > max)
            {
                max = c;
            }
        }
        cout << min << " " << max << endl;
    }
    return 0;
}