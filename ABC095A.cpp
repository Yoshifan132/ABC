#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    string s;
    cin>>s;
    int cnt=700;
    if(s[0]=='o') cnt+=100;
    if(s[1]=='o') cnt+=100;
    if(s[2]=='o') cnt+=100;
    cout<<cnt<<endl;
    return 0;
}