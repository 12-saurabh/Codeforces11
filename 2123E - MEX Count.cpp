
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    
    int t;
    
    cin>>t;
    
    while(t--){

        int n;
        cin>>n;

        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }

        map<int,int>f;
        int mex=0;
        for(auto i:mp){
            if(i.first==mex){
                mex++;
                f[i.second]++;
            }
        }

        vector<int>v(n+1,0);
        v[n]=1;

        for(int i=n-1;i>n-mex;i--){
            v[i]=v[i+1]+1;
        }

        v[0]=1;

        for(int i=1;i<n;i++){
            if(v[i]){
                break;
            }
            v[i]=v[i-1]+f[i];
        }

        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;





    }
}
