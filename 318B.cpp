#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll n,a,b,c,d,ans=0;
    bool g[100][100]={};

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        for(int j=a;j<b;j++)for(int k=c;k<d;k++)g[j][k]=true;
    }
    
    for(int i=0;i<100;i++)for(int j=0;j<100;j++)if(g[i][j])ans++;
    cout<<ans<<endl;

    return 0;
}