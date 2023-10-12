#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int v[3];
    for(int i=0;i<3;i++)cin>>v[i];

    int odd=0, even=0;
    for(int i=0;i<3;i++){
        if(v[i]%2==0)even++;
        else odd++;
    }

    int ans=0;

    if(odd==2){
        ans++;
        for(int i=0;i<3;i++)if(v[i]%2==1)v[i]++;
    }else if(even==2){
        ans++;
        for(int i=0;i<3;i++)if(v[i]%2==0)v[i]++;
    }

    int ma = max(v[0],max(v[1],v[2]));
    for(int i=0;i<3;i++)ans+=(ma-v[i])/2;
    cout<<ans<<endl;
}