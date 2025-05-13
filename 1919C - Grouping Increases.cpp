#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int t1=INT_MAX;
        int t2=INT_MAX;

        int ans=0;

        for(int i=0;i<n;i++){
            if(t1>t2){
                swap(t1,t2);
            }

            if(a[i]<=t1){
                t1=a[i];
            }

            else if(a[i]<=t2){
                t2=a[i];
            }

            else{
                t1=a[i];
                ans++;
            }
        }

        cout<<ans<<endl;
    }
}
