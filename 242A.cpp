#include <bits/stdc++.h>
#define mod 998244353
#define inv2 499122177
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<ll(n);i++)
int main() {
    double a,b,c,x;
    double value;
    cin>>a>>b>>c>>x;
    if(a>=x){
        cout<<"1.00000000000000"<<endl;
    }else if(b<x){
        cout<<"0.00000000000"<<endl;
    }else{
        value=c/(b-a);
        cout<<fixed<<setprecision(19)<<value<<endl;
    }
}