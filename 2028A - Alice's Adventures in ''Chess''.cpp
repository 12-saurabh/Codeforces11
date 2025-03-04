#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
  int t;
  cin >> t;
  while(t--){
    int n,a,b;
    cin>>n>>a>>b;

    string s;
    cin>>s;
    
    bool f=false;
    int x=0,y=0;
    for(int j=1;j<100;j++){
      for(auto i:s){
        if(i=='N'){
          x=x+0;
          y=y+1;
        }
        else if(i=='E'){
          x=x+1;
          y=y+0;
        }
        else if(i=='S'){
          x=x+0;
          y=y-1;
        }
        else{
          x=x-1;
          y=y+0;
        }
        if(x==a && y==b){
          f=true;
          break;
        }
      }
      if(f==true){
        break;
      }
    }

    if(f==true){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

  }
  return 0;
}
