#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll n,ans=0,max=101;
    cin>>n;
    vector<int> d(n);
    for(int i=0;i<n;i++)cin>>d[i];
    sort(d.begin(),d.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(d[i]<max){
            ans++;
            max=d[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
