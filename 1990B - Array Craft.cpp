#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
  int t;
  cin >> t;
  while(t>0){
    t--;
    int n,x,y;
    cin >> n >> x >> y;

    vector<int> a(n,1);
    
    x--; y--;
    
    int e;
    e=-1;
    
    for(int i=x+1;i<n;i++){
      a[i]=e;
      e*=-1;
    }
   
    e=-1;
    
    for(int i=y-1;i>=0;i--){
      a[i]=e;
      e*=-1;
    }
   
    for(int i=0;i<n;i++){
      cout << a[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
