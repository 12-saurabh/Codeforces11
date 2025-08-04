
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    
    cin.tie(nullptr);

    int t;
    
    cin >> t;
   
    while (t--) {
        
        int n,x,y;
        
        cin>>n>>x>>y;

        vector<int>a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<pair<int,int>,int>mp;
        
        int ans=0;

        for(int i:a){
            int xx=i%x;
            
            int yy=i%y;

            int kx=(x-xx)%x;
           
            int ky=yy;

            ans+=mp[{kx,ky}];
           
            mp[{xx,yy}]++;


        }

        cout<<ans<<endl;

    }

    return 0;
}
