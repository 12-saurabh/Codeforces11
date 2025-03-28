#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
        int n,k;
        cin>>n>>k;

        vector<int>a(n);

        if(n==2){
            cout<<"2 1"<<endl;
            return;
        
        }

        if(k%2==0){
            for(int i=0;i<n;i++){
                a[i]=n-1;
            }
            a[n-2]=n;
        }

        else{
            for(int i=0;i<n;i++){
                a[i]=n;
            }
            a[n-1]=n-1;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;


}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
