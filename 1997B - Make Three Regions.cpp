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

      vector<string>v(2);
      // cin>>v[0]>>v[1];
      for(auto&i:v){
        cin>>i;
      }
      
      int ans=0;
      for(int i=1;i<n-1;i++){
        for(int j=0;j<2;j++){
          if(v[j][i]=='.' && v[j][i-1]=='.' && 
          v[j][i+1]=='.' && v[j^1][i]=='.' &&
        v[j^1][i-1]!='.' && v[j^1][i+1]!='.'){
          ans++;
        }

        }
      }
      cout<<ans<<endl;



    }
}
