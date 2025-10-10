
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        vector<int>ans(n,0);

        int t=k;

        for(int i=0;i<n && t>0;i++){
            if(k%2==s[i]-'0'){
                ans[i]=1;
                t--;
            }
        }

        ans[n-1]+=t;

        for(int i=0;i<n;i++){
            if((k-ans[i])%2==1){
                s[i]='1'-(s[i]-'0');
            }
        }

        cout<<s<<endl;

        for(auto x:ans){
            cout<<x<<" ";
        }

        cout<<endl;
    }
    





}
