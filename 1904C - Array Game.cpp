
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin>>n>>k;
    
        vector<int>a(n);
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    
        if(k>=3){
            cout<<0<<endl;
            continue;
        }
    
        sort(a.begin(),a.end());

        int d=a[0];
        for(int i=0;i<n-1;i++){
            d=min(d,a[i+1]-a[i]);
        }
        if(k==1){
            cout<<d<<endl;
            continue;
        }
    
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){

                int v=a[i]-a[j];

                int p=lower_bound(a.begin(),a.end(),v)-a.begin();

                if(p<n){
                    d=min(d,a[p]-v);
                }
            
                if(p>0){
                    d=min(d,v-a[p-1]);
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
