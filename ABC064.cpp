#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll r,g,b;
    cin>>r>>g>>b;
    if((g*10+b)%4==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}