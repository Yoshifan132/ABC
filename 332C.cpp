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
    ll m,n;
    ll logo=1000, max=-1;
    cin>>n>>m;
    ll muji=m;
    string s;
    cin>>s;
    rep(i,0,s.size()){
        if(s[i]=='0'){
            if(max<(1000-logo)) max=1000-logo;
            muji=m;
            logo=1000;
        }else if(s[i]=='1'){
            if(muji>0) muji--;
            else logo--;
            if(max<(1000-logo)) max=1000-logo;
        }else{
            logo--;
            if(max<(1000-logo)) max=1000-logo;
        }
    }
    cout<<max<<endl;
}