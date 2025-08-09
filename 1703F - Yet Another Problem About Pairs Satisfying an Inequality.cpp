
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
        cin>>n;

        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        vector<int>v;
        int ans=0;

        for(int i=1;i<=n;i++){
            if(a[i]>=i){
                continue;
            }

            ans+=lower_bound(v.begin(),v.end(),a[i])-v.begin();

            v.push_back(i);
        }

        cout<<ans<<endl;

    }
}
