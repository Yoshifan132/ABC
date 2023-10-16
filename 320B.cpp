#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

bool is_palindrome(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) if (s[i] != s[n - i - 1]) return false;
	return true;
}

int main() {
    int ans=1;
    string s;
    cin>>s;
    int n=s.size();
    rep(i,0,n){
        rep(j,i+1,n+1){
            string t="";
            rep(k,i,j) t+=s[k];
            if (is_palindrome(t)) ans = max(ans, j - i);
        }
    }
    cout<<ans<<endl;
}