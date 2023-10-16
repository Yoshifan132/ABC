#include <bits/stdc++.h>
#define inv2 499122177
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin>>n;
    string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    rep(i,0,n+2) cout<<pi[i];
    cout<<endl;
    return 0;
}