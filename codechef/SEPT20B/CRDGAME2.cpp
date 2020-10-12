//https://www.codechef.com/SEPT20A/problems/CRDGAME2/

//A game is played between two players, each with a pile of N<=10^5 cards. 
//In each turn, both players draw a card from top of their piles. 
//The player having higher card value wins this round, gets both cards and inserts those to the bottom of his pile.
//If the value of drawn cards is equal, both players insert their card at the bottom of their respective piles. 
//For each transfer, the value of card decreases by 1 and when it becomes 0, it is discarded from the game. 
//The player ending up without any card loses the game. 
//If the game is a non-ending game, the player having higher sum of cards win. If even the sum of cards is equal, the match ends in draw.

//Find the number of ways to distribute the cards between the players before the start of the game such that there should be a winner.

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
