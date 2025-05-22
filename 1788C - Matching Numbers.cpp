
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        if(n%2==0){
            cout<<"NO"<<endl;
        }
        else{

            cout<<"YES"<<endl;
            int m=(n-1)/2;

            for(int i=1;i<=m;i++){

                cout<<i<<" "<<3*m+(i+2)<<endl;
            
            }

            for(int i=m+1;i<=2*m+1;i++){

                cout<<i<<" "<<i+m+1<<endl;
            }
        }


    }
    return 0;
}
