#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,s=0;
        cin>>n;
        for(int i=0;i<n;i++)
        { int m,n,d=0;
            cin>>m>>n;
            d=abs(m-n);
            if(d>5)
            {
                s++;
            }

        }
        cout<<s<<endl;
    }
    return 0;
} 
