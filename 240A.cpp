#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll m,n;
    cin>>m>>n;
    if(n==m+1){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(m==1 && n==10){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}