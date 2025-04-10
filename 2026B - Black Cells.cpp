#include<bits/stdc++.h>

using namespace std;

#define int long long


void solve()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n%2==0){
        int ans=a[1]-a[0];
        for(int i=2;i<n;i+=2){
            ans=max(ans,a[i+1]-a[i]);
        }

        cout<<ans<<endl;
    }

    else{

        int mini=1e18;
        for(int i=0;i<n;i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                if(j==i){
                    continue;
                }

                v.push_back(a[j]);
            }

            int ans=v[1]-v[0];
            for(int j=2;j<n-1;j+=2){
                ans=max(ans,v[j+1]-v[j]);
            }

            mini=min(mini,ans);
        }

        cout<<mini<<endl;
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
