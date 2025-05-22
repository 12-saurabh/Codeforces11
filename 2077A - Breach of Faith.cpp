
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int>a(2*n);
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int sum=0;
        vector<int>g;
        for(int i=1;i<n;i++){
            g.push_back(a[i]);
            g.push_back(a[i+n-1]);

            sum+=a[i+n-1]-a[i];
        }

        g.push_back(sum+a[2*n-1]+a[0]);
        g.push_back(a[0]);

        cout<<a[2*n-1];

        for(int i=0;i<2*n;i++){
            cout<<" "<<g[i];
        }
        cout<<endl;

    }

    return 0;
}
