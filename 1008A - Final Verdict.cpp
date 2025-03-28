#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin>>n>>x;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        if(sum==x*n){

            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }



    }
    return 0;
}
