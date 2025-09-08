
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
        

        int a,b;
        cin>>a>>b;

        if(a%2==0 && b%2==1){
            cout<<-1<<endl;
        }
        else if(a%2==1 && b%2==1){
            int ans=b*a+b/b;

            cout<<ans<<endl;
        }
        else{
            int k=b/2;

            int ans=k*a+b/k;

            if(ans%2==0){
                cout<<ans<<endl;
            }
            else{
                cout<<-1<<endl;
            }

        }    
 
    }
    return 0;
}
