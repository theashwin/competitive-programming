/*Problem link - https://www.codechef.com/DEC19B/problems/WATSCORE/

Problem Description - You are participating in a contest which has 11 problems (numbered 1 through 11).
The first eight problems (i.e. problems 1,2,…,8) are scorable, while the last three problems (9, 10 and 11)
are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems.
That is, for each scorable problem, you look at the scores of all submissions
you made on that problem and take the maximum of these scores
(or 0 if you didn't make any submissions on that problem);
the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define db(a) cout << a << endl
#define adb(a) for(auto i:a) cout << i << " "; cout << endl
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define N 10010

int main()
{
	fastIO;
	long long t, n, x, y, sum;
	cin >> t;
	while (t--)
	{
		long long p[12] = {0};
		sum = 0;
		cin >> n;

		while (n--)
		{
			cin >> x >> y;

			if (x > 0 && x < 9)
			{
				if (p[x] < y)
					p[x] = y;
			}
		}
		for (int i = 1; i < 12; i++)
			sum = sum + p[i];

		cout << sum << endl;
	}
	return 0;
}