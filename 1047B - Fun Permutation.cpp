
#include <bits/stdc++.h>
using namespace std;

#define int long long 
int32_t main() {
   
    // For fast run the code
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        

        int n;
        cin>>n;

        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        for(int i=0;i<n;i++){
            cout<<(n+1)-p[i]<<" ";
        }

        cout<<endl;

        
 
    }
    return 0;
}
