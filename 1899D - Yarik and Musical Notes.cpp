
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin >> n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        unordered_map<int,int>mp;
        mp.reserve(n*2);

        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }

        int ans=0;
        for(auto x:mp){
            int a=x.second;

            ans+=a*(a-1)/2;
        }

        ans+=mp[1]*mp[2];

        cout<<ans<<endl;

    }

    return 0;
}
