#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll n,m,p;
    cin>>n>>m>>p;
    if(n<m){
        cout<<0<<endl;
    }else{
        cout<<(n-m)/p+1<<endl;
    }
    return 0;
}
