#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<int>a(n);

        map<int,int>mp;

        set<int>s;
        for(auto i:a){
            cin>>i;

            mp[i]++;

            s.insert(i);
            s.insert(i+1);
        }

        int l=0;
        int ans=0;

        for(auto &c:s){
            int x=mp[c];

            ans+=max(0ll,x-l);
            l=x;
        }

        cout<<ans<<endl;




    }
    return 0;
}
