#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    int n,m,a;
    cin>>n>>m>>a;

    int ans=((m+a-1)/a)*((n+a-1)/a);
    cout<<ans<<endl;
}
