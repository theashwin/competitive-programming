//https://www.codechef.com/JUNE20B/problems/CHFICRM/


//There exists 3 denominations, Rs 5, Rs 10 and Rs 15. Each ice-cream costs Rs 5.
//There are N customers. Each customer has a certain denomination with him.
//He buys an ice-cream from Chef only if Chef can give him change. 
//Chef initially has no money. Can all the customers buy their ice-cream?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, x, y, k, m, a[10000], t, n;
    cin >> t;
    while (t != 0)
    {
        x = 0;
        y = 0;
        k = 0;
        m = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] != 5)
        {
            cout << "NO";
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (a[i] == 5)
                {
                    x++;
                }
                else if (a[i] == 10)
                {
                    y++;
                    k = (a[i] - 5) / 5;
                    if (x >= k)
                    {
                        x = x - k;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (a[i] == 15)
                {
                    k = (a[i] - 5) / 5;
                    m = (a[i] - 5) / 10;
                    if (x >= k || y >= m)
                    {
                        {
                            if (y >= m)
                            {
                                y = y - m;
                            }
                            else
                            {
                                x = x - k;
                            }
                        }
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if (i != n)
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
        }
        t--;
        if (t != 0)
        {
            cout << "\n";
        }
    }
    return 0;
}
