#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int d, n, res = 0;
        cin>>d>>n;

        while(d--){
            res = n * (n+1)/2;
            n = res;
        }
        cout<<res<<endl;
    }
    return 0;
}
