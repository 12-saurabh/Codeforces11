
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        bool one=true;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                one=false;
            }
        }
        bool ans=one;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1] && a[i]==0){
                ans=true;
                break;
            }
        }

        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
