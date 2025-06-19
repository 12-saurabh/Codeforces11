
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        
        int n,s;
        cin>>n>>s;

        vector<int>x(n);

        for(int i=0;i<n;i++){
            cin>>x[i];
        }

        int mini=x[0];
        int maxi=x[n-1];

        int ans=maxi-mini+min(abs(s-mini),abs(s-maxi));

        cout<<ans<<endl;


    }
    return 0;
}
