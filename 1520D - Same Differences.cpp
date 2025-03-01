#include <bits/stdc++.h>
using namespace std;
#define int  long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        int ans=0;
        map<int,int>mp;
        for(int j=0;j<n;j++){
            int i;
            cin>>i;
            ans+=mp[i-j];
            mp[i-j]++;
        }

        cout<<ans<<endl;


    }
}
