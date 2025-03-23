#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int x,y,a;
    cin>>x>>y>>a;

    a=a%(x+y);
    if(a<x){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
  return 0;


  }

