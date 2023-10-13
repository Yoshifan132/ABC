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
    int h,m,h1,m1,h2,m2;
    cin>>h>>m;
    rep(j,m,60){
        h1=h%10;
        m1=j/10;
        h2=(h/10)*10+m1;
        m2=h1*10+j%10;
        if(0<=h2 && h2<=23 && 0<=m2 && m2<=59){
            cout<<h<<" "<<j<<endl;
            return 0;
        }
    }
    rep(i,h+1,24)rep(j,0,60){
        h1=i%10;
        m1=j/10;
        h2=(i/10)*10+m1;
        m2=h1*10+j%10;
        if(0<=h2 && h2<=23 && 0<=m2 && m2<=59){
            cout<<i<<" "<<j<<endl;
            return 0;
        }
    }
    rep(i,0,h)rep(j,0,60){
        h1=i%10;
        m1=j/10;
        h2=(i/10)*10+m1;
        m2=h1*10+j%10;
        if(0<=h2 && h2<=23 && 0<=m2 && m2<=59){
            cout<<i<<" "<<j<<endl;
            return 0;
        }
    }
    rep(j,0,m){
        h1=h%10;
        m1=j/10;
        h2=(h/10)*10+m1;
        m2=h1*10+j%10;
        if(0<=h2 && h2<=23 && 0<=m2 && m2<=59){
            cout<<h<<" "<<j<<endl;
            return 0;
        }
    }
}