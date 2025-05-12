
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        int ans=0;

        map<int,int>u,s,d1,d2;

        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;

            u[x]++;
            s[y]++;
            d1[x-y]++;
            d2[x+y]++;
        }

        

        for(auto x : u){

            ans+=x.second*(x.second-1);

        }

        for(auto x : s){

            ans+=x.second*(x.second-1); 
        }

        for(auto x : d1){

            ans+=x.second*(x.second-1);
        }

        for(auto x : d2){

            ans+=x.second*(x.second-1);
        }

        cout<<ans<<endl;



    }
    return 0;
}
