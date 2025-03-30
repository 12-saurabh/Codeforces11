#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mini=*min_element(a.begin(),a.end());
    int maxi=*max_element(a.begin(),a.end());


    int ans=maxi-mini;

    cout<<ans<<endl;


}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
