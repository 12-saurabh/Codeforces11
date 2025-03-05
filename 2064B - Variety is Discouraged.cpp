#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin>>n;

    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
      cin>>a[i];
      mp[a[i]]++;
    }

    int l=-1,r=-1,curr=0,maxi=0;
    for(int i=0;i<n;i++){
      if(mp[a[i]]==1){
        curr++;
      }
      else{
        curr=0;
      }

      if(curr>maxi){
        maxi=curr;
        r=i;
        l=i-curr+1;
      }
    }

    if(maxi==0){
      cout<<0<<endl;
    }
    else{
      cout<<l+1<<" "<<r+1<<endl;
    }

  }
  return 0;
}
