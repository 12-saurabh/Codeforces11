#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve(){

    int n;
    cin>>n;
    vector<int>k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
    }

    int l=k[0];
    for(int i=1;i<n;i++){
        l=l*((k[i])/__gcd(l,k[i]));
    }

    vector<int>ans(n);
    int sum=0;
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        ans[i]=l/k[i];
        sum+=ans[i];
        mini=min(mini,k[i]*ans[i]);
    }
    if(sum<mini){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }




}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
