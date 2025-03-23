#include <bits/stdc++.h>
using namespace std;
#define int long long 

void solve(){
  int n,m;
  cin>>n>>m;

  vector<string>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(a[i][j]=='0'){
        continue;
      }
      bool f=1;

      for(int k=0;k<i;k++){
        if(a[k][j]=='0'){
          f=0;
          break;
        }
      }

      if(f){
        continue;
      }
      
      f=1;
      for(int k=0;k<j;k++){
        if(a[i][k]=='0'){
          f=0;
          break;
        }
      } 
      
      if(f==0){
        cout<<"NO"<<endl;
        return;
      }
    }
  }
  cout<<"YES"<<endl;
}
int32_t main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;


  }

