#include<bits/stdc++.h>
using namespace std;
#define int long long 


int32_t main(){
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin>>n>>k;

    int ans=(k-1)/(n-1);
    cout<<ans+k<<endl;

  }
  return 0;
}
