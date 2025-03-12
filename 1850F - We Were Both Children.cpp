#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int mod=1e9;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;

    vector<int>v(n);
    vector<int>cnt(n+1,0);
    vector<int>mx(n+1,0);
    for(auto i:v){
      cin>>i;

      if(i<=n){
        cnt[i]++;
      }
    }

    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j+=i){
        mx[j]+=cnt[i];
      }
    }
    cout<<*max_element(mx.begin(),mx.end())<<endl;
    return 0;
    }
}
