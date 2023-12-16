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
    int n,taka=0,aoki=0,cnt=0,cnt1=0;
    cin>>n;
    string s;
    cin>>s;
    rep(i,0,n){
        if(s[i]=='T'){
            taka++;
            cnt=i;
        }else{
            aoki++;
            cnt1=i;
        }
    }
    if(taka>aoki) cout<<'T'<<endl;
    else if(aoki>taka) cout<<'A'<<endl;
    else{
        if(cnt<cnt1) cout<<'T'<<endl;
        else cout<<'A'<<endl;
    }
}