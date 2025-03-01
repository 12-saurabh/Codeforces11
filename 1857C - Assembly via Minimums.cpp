#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int m=n*(n-1)/2;
 
        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
 
        map<int,int,greater<int>>mp;
        for(int i=0;i<m;i++){
            mp[b[i]]++;
        }
 
 
        int x=0;
        for(auto i:mp){
            while(i.second>0){
                cout<<i.first<<" ";
                i.second-=x;
                x++;
            }
        }
        cout<<endl;
 
 
    }
}
