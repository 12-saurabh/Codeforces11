#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        vector<int>a(n);
        int ans=0;
        for(auto &i:a){
            cin>>i;

            ans+=__builtin_popcountll(i);
        }

        for(int j=0;j<=60;j++){
            int b=(1ll<<j);

            for(auto x:a){
                if(!(x&b) && k>=b){
                    ans++;
                    k-=b;
                }
            }
        }

        cout<<ans<<endl;


    }
}
