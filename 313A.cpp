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
    int n,max=-1,cnt=0;
    cin>>n;
    vector<int> p(n);
    rep(i,0,n){
        cin>>p[i];
        if(max<p[i]) max=p[i]; 
    }
    rep(i,0,n){
        if(max==p[i]) cnt++;
    }
    if(max==p[0] && cnt==1) cout<<0<<endl;
    else cout<<max+1-p[0]<<endl;
}