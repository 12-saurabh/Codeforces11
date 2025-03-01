#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
 
 
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
 
        while(n>0){
            for(auto i:mp){
                if(i.second>0){
                    cout<<i.first;
                    mp[i.first]--;
                    n--;
                }
            }
        }
        cout<<endl;
 
 
    }
