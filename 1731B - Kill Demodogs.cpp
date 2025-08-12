
#include <bits/stdc++.h>
using namespace std;

#define int long long

int const MOD=1e9+7;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        int ans=((((n*(n+1))%MOD)*(4*n-1))%MOD*337)%MOD;
        cout<<ans<<endl;
        

    }
    return 0;
}
