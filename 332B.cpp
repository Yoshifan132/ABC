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
    ll k,g,m;
    ll glass=0, magcup=0;
    cin>>k>>g>>m;
    rep(i,0,k){
        if(glass==g) glass=0;
        else if(magcup==0) magcup=m;
        else{
            if((g-glass)>=magcup){
                glass+=magcup;
                magcup=0;
            }else{
                magcup=magcup-g+glass;
                glass=g;
            } 
        }
    }
    cout<<glass<<" "<<magcup<<endl;
}