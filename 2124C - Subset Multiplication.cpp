
#include <bits/stdc++.h>
using namespace std;

#define int long long

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int ans=1;
        for(int i=1;i<n;i++){
            if(b[i]%b[i-1]){
                ans=lcm(ans,b[i-1]/__gcd(b[i-1],b[i]));
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
