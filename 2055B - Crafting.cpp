#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int m=1e9;
        int r=0;
        int bad=-1;
        int need=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                if(bad!=-1){
                    r=1;
                }
                bad=i;
                need=b[i]-a[i];
            }
            else{
                m=min(m,a[i]-b[i]);
            }
        }
        if(r){
            cout<<"NO"<<endl;
        }
        else if(m>=need){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }


        
    }
    return 0;
}
