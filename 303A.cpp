#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    int n,cnt=0;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    rep(i,0,n){
        if(s[i]==t[i]) cnt++;
        if(s[i]=='1' && t[i]=='l') cnt++;
        if(s[i]=='l' && t[i]=='1') cnt++;
        if(s[i]=='0' && t[i]=='o') cnt++;
        if(s[i]=='o' && t[i]=='0') cnt++;
    }
    if(cnt==n){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}