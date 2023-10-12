#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin>>N;
    vector<ll> a(N);
    int b[N];

    for(int i=0;i<N;i++){
        cin>>a[i];
        b[i]=0;
    }

    int cnt=0,ans=0;

    while(b[cnt]==0){
        if(cnt==1){
            cout<<ans<<endl;
            return 0;
        }
        ans++;
        b[cnt]++;
        cnt = a[cnt]-1;
    }
    cout<<-1<<endl;
}