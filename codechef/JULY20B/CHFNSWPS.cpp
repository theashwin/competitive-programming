#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t != 0)
    {
        unsigned long long int a[1000000], b[1000000], minn, i, n, k = 0, sum = 0, x;
        unordered_map<long long int, long long int> f1;
        unordered_map<long long int, long long int> f2;
        unordered_map<long long int, long long int> f3;
        vector<unsigned long long int> v1;
        vector<unsigned long long int> v2;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0)
            {
                minn = a[0];
            }
            else
            {
                if (a[i] < minn)
                {
                    minn = a[i];
                }
            }
            f1[a[i]]++;
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];

            if (b[i] < minn)
            {
                minn = b[i];
            }

            f1[b[i]]++;
        }

        sort(a, a + n);
        sort(b, b + n);
        minn *= 2;
        for (auto i : f1)
        {
            if (i.second % 2 != 0)
            {
                k = 1;
                break;
            }
            else
            {
                f2[i.first] = (i.second) / 2;
                f3[i.first] = (i.second) / 2;
            }
        }
        if (k == 1)
        {
            cout << "-1";
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (f2[a[i]] == 0)
                {
                    v1.push_back(a[i]);
                }
                else
                {
                    f2[a[i]]--;
                }
            }
            for (i = 0; i < n; i++)
            {
                if (f3[b[i]] == 0)
                {
                    v2.push_back(b[i]);
                }
                else
                {
                    f3[b[i]]--;
                }
            }

            if (v1.size() == 0)
            {
                cout << "0";
            }
            else if (v1.size() != v2.size())
            {
                cout << "-1";
            }
            else
            {
                sort(v1.begin(), v1.end());
                sort(v2.begin(), v2.end(), greater<int>());
                for (i = 0; i < v1.size(); i++)
                {
                    x = min(v1[i], v2[i]);
                    sum += min(x, minn);
                }
                cout << sum;
            }
        }
        cout << endl;

        t--;
    }
    return 0;
}