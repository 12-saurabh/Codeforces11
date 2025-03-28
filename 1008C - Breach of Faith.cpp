#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
        int n;
        cin>>n;

        int m=2*n;

        vector<int>a(m);

        for(int i=0;i<m;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        vector<int>b;
        
        int sum=0;

        for(int i=1;i<n;i++){
            b.push_back(a[i]);
            b.push_back(a[i+n-1]);

            sum+=a[i+n-1]-a[i];
        }

        b.push_back(sum+a[m-1]+a[0]);
        b.push_back(a[0]);

        cout<<a[m-1];

        for(int i=0;i<m;i++){
            cout<<" "<<b[i];
        }
        cout<<endl;


}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
