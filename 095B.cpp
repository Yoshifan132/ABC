#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)

int main() {
    ll n,x,cnt=0,min=1e5;
    cin>>n>>x;
    int m;
    for(int i=0;i<n;i++){
        cin>>m;
        if(min>m) min=m;
        cnt+=m;
    }
    if((x-cnt)/min<1){
        cout<<n<<endl;
        return 0;
    }else{
        cout<<n+(x-cnt)/min<<endl;
        return 0;
    }
}