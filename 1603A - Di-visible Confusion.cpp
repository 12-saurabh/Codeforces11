
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        bool ok=true;

        for(int i=1;i<=n;i++){

            bool found=false;
            for(int j=i+1;j>=2;j--){
                if(a[i]%j){
                    found=true;
                    break;
                }
            }

            ok&=found;

        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    





}
