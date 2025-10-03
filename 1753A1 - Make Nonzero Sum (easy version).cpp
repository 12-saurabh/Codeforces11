
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

        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        int sum=0;

        for(int i=1;i<=n;i++){
            sum+=a[i];
        }

        if(sum%2){
            cout<<-1<<endl;
            continue;
        }

        vector<pair<int,int>>ans;

        for(int i=1;i<=n;i+=2){
            if(a[i]==a[i+1]){
                ans.push_back({i,i+1});
            }
            else{
                ans.push_back({i,i});
                ans.push_back({i+1,i+1});
            }
        }

        cout<<ans.size()<<endl;
        for(auto x:ans){
            cout<<x.first<<" "<<x.second<<endl;
        }
        cout<<endl;

    }

    return 0;
}
