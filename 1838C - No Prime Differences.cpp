
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i%2==0){
                    cout<<(i/2+n/2)*m+j+1<<" ";
                }
                else{
                    cout<<(i/2)*m+j+1<<" ";
                }
            }
            cout<<endl;
        }

        cout<<endl;

    }
    return 0;
}
