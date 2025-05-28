#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        int f=-1;
        int l=-1;
        for(int i=0;i<n;i++){
            if(f==-1 && (a[i]%2)!=(a[0]%2)){
                f=i;
            }
            if((a[i]%2)!=(a[n-1]%2)){
                l=i;
            }
        }

        if((a[0]+a[n-1])%2){
            cout<<min(f,n-l-1)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
