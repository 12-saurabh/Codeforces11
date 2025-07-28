
#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int x=b[0];
        bool f=true;
        for(int i=1;i<n;i++){
            if(b[i]>=2*x){
                f=false;
                break;
            }
            x=min(x,b[i]);
        }

        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
    return 0;
}
