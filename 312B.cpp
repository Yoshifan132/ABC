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
    int n,m,cnt=0;
    cin>>n>>m;
    char s[n][m];
    rep(i,0,n)rep(j,0,m){
        cin>>s[i][j];
    }
    rep(i,0,n-8)rep(j,0,m-8){
        rep(p,0,3)rep(q,0,3){
            if(s[i+p][j+q]=='#') cnt++;
        }
        if(cnt==9) cnt=0;
        else cnt=-100;
        rep(p,0,4)rep(q,0,4){
            if(s[i+p][j+q]=='.') cnt++;
        }
        if(cnt==7) cnt=0;
        else cnt=-100;
        rep(p,5,9)rep(q,5,9){
            if(s[i+p][j+q]=='.') cnt++;
        }
        if(cnt==7) cnt=0;
        else cnt=-100;
        rep(p,6,9)rep(q,6,9){
            if(s[i+p][j+q]=='#') cnt++;
        }
        if(cnt==9){
            cout<<i+1<<" "<<j+1<<endl;
        }
        cnt=0;
    }
}