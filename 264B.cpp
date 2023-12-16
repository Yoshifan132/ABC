#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,c;
    cin>>r>>c;
    if(max(abs(8-r),abs(8-c))%2) cout<<"black"<<endl;
    else cout<<"white"<<endl;
}