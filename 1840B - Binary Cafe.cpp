#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int mod=1e9;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;

      k=min(k,30ll);

      int y=(n+1);
      int x=1<<k;
      
      int ans=min(y,x);
      
      cout<<ans<<endl;

    }
}
