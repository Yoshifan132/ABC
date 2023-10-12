#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll m,n,max=0;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    cin>>m;
    vector<string> t(m);
    for(int i=0;i<m;i++)cin>>t[i];

    map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]=0;
    }
    for(int i=0;i<m;i++){
        mp[t[i]]=0;
    }
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(int i=0;i<m;i++){
        mp[t[i]]--;
    }
    for(int i=0;i<n;i++){
        if(mp[s[i]]>max)max=mp[s[i]];
    }
    cout<<max<<endl;
}