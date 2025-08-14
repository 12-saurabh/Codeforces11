
#include <bits/stdc++.h>
using namespace std;

#define int long long

int get(int x){
    return x*(x+1)/2;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int k,x;
        cin>>k>>x;

        int left=1;
        int right=2*k-1;

        int ans=2*k-1;

        bool flagover=false;

        while(left<=right){
            int mid=(left+right)/2;
            if(mid>=k){
                flagover=(get(k)+get(k-1)-get(2*k-1-mid)>=x);
            }
            else{
                flagover=(get(mid)>=x);
            }

            if(flagover){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }

        cout<<ans<<endl;

        

    }
    return 0;
}
