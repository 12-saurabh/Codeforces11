

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
        
    int n,c,d;
    cin>>n>>c>>d;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int>mp;

    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    int ans=n*c+d;
    int count=0;

    for(auto x:mp){
        count++;

        ans=min(ans,((n-count)*c+(x.first-count)*d));
    }

    cout<<ans<<endl;

}

int32_t main() {

    // For Fast Run the Code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {

        solve();

    }
    
    return 0;
}
