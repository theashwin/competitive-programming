#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, count = 0, pro = 1, k, i, maxx = -1, ans = 1, a = 1, b = 1, s = 1000000007, p, j, z = 2;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            if (k > maxx)
            {
                maxx = k;
                count = 0;
            }
            if (k == maxx)
            {
                count++;
            }
        }
        for (i = 0; i <= n; i++)
        {
            p = i;
            while (p > 0)
            {
                if (p % 2 == 1)
                    ans = (ans * z) % s;
                z = (z * z) % s;
                p = p / 2;
            }
            j = ans;
            ans = 1;
            z = 2;
        }
        a = j;
        if (count % 2 != 0)
        {

            cout << a;
        }
        else
        {
            z = 2;
            ans = 1;
            for (i = 0; i <= (n - count); i++)
            {
                p = i;
                while (p > 0)
                {
                    if (p % 2 == 1)
                        ans = (ans * z) % s;
                    z = (z * z) % s;
                    p = p / 2;
                }
                j = ans;
                ans = 1;
                z = 2;
            }
            b = j;
            for (i = 0; i < (count / 2); i++)
            {
                pro = ((pro % s) * ((count - i) % s)) % s;
                ans = 1;
                z = i + 1;
                p = s - 2;
                while (p > 0)
                {
                    if (p % 2 == 1)
                        ans = (ans * z) % s;
                    z = (z * z) % s;
                    p = p / 2;
                }
                pro = ((pro % s) * (ans % s)) % s;
            }
            b = ((b % s) * (pro % s)) % s;

            ans = ((a % s) - (b % s)) % s;
            if (ans < 0)
            {
                ans = ((ans % s) + s) % s;
                cout << ans;
            }
            else
            {
                ans %= s;
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}