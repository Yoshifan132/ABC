#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll n;
    cin>>n;
    if(n%2==0)cout<<n/2<<endl;
    else cout<<n/2+1<<endl;
    return 0;
}
