//https://www.codechef.com/problems/DRCHEF


//There are N countries with populations a_1,a_2,...,a_n
// all of them are initially infected with coronavirus.
//There are X vaccines on day 1. 
//The cures available on day i+1 is twice the number of cures delivered on day i
//. The number of cures delivered to some country on some day cannot exceed the number of infected people it currently has. 
//Also the infection spreads again to the cured people. 
//The number of infections doubles in a country everyday 
//(after all cures on that day, and without exceeding the initial population of that country).

//Find the minimum number of days required to cure the world from coronavirus.


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, l = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (k >= a[n - 1])
        {
            cout << n << endl;
            continue;
        }
        int p[n];
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            int h = k;
            long long int n1 = a[i];
            long long int n2 = a[i];
            while (n1 - h > 0)
            {
                n1 = n1 - h;
                h = h * 2;
                n1 = n1 * 2;
                if (n1 > n2)
                    n1 = n2;
                ++c;
            }
            p[i] = c + 1 + i;
        }
        int s[n - 1];
        for (int i = 0; i < n - 1; i++)
        {

            int c = 0;
            int h = a[i] * 2;
            long long int n1 = a[i + 1];
            long long int n2 = a[i + 1];
            while (n1 - h > 0)
            {
                n1 = n1 - h;
                h = h * 2;
                n1 = n1 * 2;
                if (n1 > n2)
                    n1 = n2;
                ++c;
            }
            c = c + 1;
            if (i == 0)
                s[i] = c;
            else
                s[i] = s[i - 1] + c;
        }
        long long int v[n];
        for (int i = 0; i < n - 1; i++)
        {
            if (i == 0)
                v[l++] = p[i] + s[n - 2];
            else
                v[l++] = p[i] + s[n - 2] - s[i - 1];
        }
        v[l++] = p[n - 1];
        sort(v, v + l);
        cout << v[0] << endl;
    }
    return 0;
}
