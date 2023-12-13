#include <bits/stdc++.h>
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() {
    ll a,b,value;
    cin>>a>>b;
    value = pow(a,b)+pow(b,a);
    cout<<value<<endl;
}