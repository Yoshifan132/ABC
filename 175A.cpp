#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    string s;
    int cnt=1;
    cin>>s;
    if(s[0]=='S' && s[1]=='S' && s[2]=='S'){
        cout<<0<<endl;
        return 0;
    }
    rep(i,0,2){
        if(s[i]=='R' && s[i+1]=='R') cnt++;
    }
    cout<<cnt<<endl;
}