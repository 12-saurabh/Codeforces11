
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n,l,r,k;
        cin>>n>>l>>r>>k;

        if(n%2==1){
            cout<<l<<endl;
            continue;
        }
        if(n==2){
            cout<<-1<<endl;
            continue;
        }

        int ans=1;
        bool f=0;

        while(ans<=r){
            if(ans>l){
                f=1;
                if(k<=n-2){
                    cout<<l<<endl;
                }
                else{
                    cout<<ans<<endl;
                }
                break;
            }
            ans*=2;
        }

        if(f==0){
            cout<<-1<<endl;
        }

    }

    return 0;
}
