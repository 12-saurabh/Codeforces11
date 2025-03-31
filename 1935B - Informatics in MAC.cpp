#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;
    cin>>n;

    vector<int>a(n);

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=1;
    }

    int mex=0;

    for(int i=0;i<1e5+5;i++){
        if(mp[i]==0){
            mex=i;
            break;
        }
    }

    if(mex==0){
        cout<<2<<endl;
        cout<<1<<" "<<1<<endl;
        cout<<2<<" "<<n<<endl;
        return;
    }

    mp.clear();

    int left=0;

    vector<pair<int,int>>ans;

    for(int i=0;i<n;i++){
        if(a[i]<mex){
            mp[a[i]]=1;
        }
        if(mp.size()==mex){
            ans.push_back({left+1,i+1});
            left=i+1;
            mp.clear();
        }
    }

    ans[ans.size()-1].second=n;

    if(ans.size()<2){
        cout<<-1<<endl;
    }
    else{
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }




}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
