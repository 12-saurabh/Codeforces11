
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        if(a[0]!=a[1]){
            cout<<"YES"<<endl;
        }
        else{
            bool f=0;
            for(int i=1;i<n;i++){
                if(a[i]%a[0]!=0){
                    f=1;
                }
            }
            if(f==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}

