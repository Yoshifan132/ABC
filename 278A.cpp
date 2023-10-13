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
    int n,k,a[101];
    cin>>n>>k;
    rep(i,0,n) cin>>a[i];
    if(k>=n){
        rep(i,0,n) cout<<0<<" ";
    }else{
        rep(i,k,n) cout<<a[i]<<" ";
        rep(i,0,k) cout<<0<<" ";
    }
    cout<<endl;
    return 0;
}