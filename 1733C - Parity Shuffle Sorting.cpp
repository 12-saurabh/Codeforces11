
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        
        int n;
        cin >> n;

        vector<int>a(n+1);

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }


        cout<<n-1<<endl;

        int x=0;
        if((a[1]+a[n])%2){
            x=a[1];
        }
        else{
            x=a[n];
        }

        if(n>1){
            cout<<1<<" "<<n<<endl;
        }

        for(int i=2;i<n;i++){
            if((x+a[i])%2){
                cout<<1<<" "<<i<<endl;
            }
            else{
                cout<<i<<" "<<n<<endl;            
            }
        }

    }
    
    return 0;
}
