#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    ll n,s,k,value=0;
    cin>>n>>s>>k;
    vector<ll> p(n),q(n);
    rep(i,0,n) cin>>p[i]>>q[i];
    rep(i,0,n){
        value+=p[i]*q[i];
    }
    if(value<s){
        value+=k;
    }
    cout<<value<<endl;
}