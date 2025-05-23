
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int,pair<int,int>>>v(n);

        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;

            v[i]={a+b,{a,b}};
        }

        sort(v.begin(),v.end());

        for (int i = 0; i < n; ++i) {
            cout << v[i].second.first << " " << v[i].second.second << " ";
        }
        cout << endl;
    }
    return 0;
}
