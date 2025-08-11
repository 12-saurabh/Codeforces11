
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >>n>>k;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }


        int ans=0;
        for(int j=30;j>=0;j--){

            int count=0;
            for(int i=0;i<n;i++){
                if(a[i] & (1<<j)){
                    count++;
               }
            }
            count=n-count;

            if(count<=k){
                ans+=(1<<j);
                k-=count;
            }

        }

        cout<<ans<<endl;


        

    

    }
    return 0;
}
