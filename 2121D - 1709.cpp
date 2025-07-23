#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector<pair<int,int>>v;

        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(a[j-1]>a[j]){
                    swap(a[j-1],a[j]);
                    v.push_back({1,j});
                }
            }
            
        }

        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(b[j-1]>b[j]){
                    swap(b[j-1],b[j]);
                    v.push_back({2,j});
                }
            }
        }

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                swap(a[i],b[i]);
                v.push_back({3,i+1});
            }
        }

        cout<<v.size()<<endl;
        for(auto x:v){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}
