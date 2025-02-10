#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 
    int ans=-1;
    int x=2;
 
    while(x){
        set<int>s;
        for(auto i:a){
            s.insert(i%x);
        }
        if(s.size()==2){
            ans=x;
            break;
        }
        x*=2;
    }
    cout<<ans<<endl;
 
 
 
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 
 
}
