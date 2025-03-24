#include <bits/stdc++.h>

using namespace std;
#define int long long 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int mid=n/2;
        int r=n;

        vector<pair<int,int>>p;

        if(find(a.begin()+mid,a.end(),0)!=a.end()){
            p.push_back({mid+1,n});
            r-=(n-mid-1);
        }

        if(find(a.begin(),a.begin()+mid,0)!=a.begin()+mid){
            p.push_back({1,mid});
            r-=(mid-1);
        }

        p.push_back({1,r});

        cout<<p.size()<<endl;
        for(const auto &i:p){
            cout<<i.first<<" "<<i.second<<endl;
        }


        
    }
    return 0;
}
