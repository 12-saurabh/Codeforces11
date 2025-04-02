
#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int>best(vector<int>&arr){
    vector<int>ind(3,-1);

    for(int i=0;i<arr.size();i++){
        if(ind[0]==-1 || arr[i]>arr[ind[0]]){
            ind[2]=ind[1];
            ind[1]=ind[0];
            ind[0]=i;
        }

        else if(ind[1]==-1 || arr[i]>arr[ind[1]]){
            ind[2]=ind[1];
            ind[1]=i;
        }
        else if(ind[2]==-1 || arr[i]>arr[ind[2]]){
            ind[2]=i;
        }
    }
    return ind;
}

void solve(){
    int n;
    cin>>n;

    vector<int>a(n),b(n),c(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    vector<int>aa=best(a);
    vector<int>bb=best(b);
    vector<int>cc=best(c);
    
    int ans=0;

    for(int x:aa){
        for(int y:bb){
            for(int z:cc){
                if(x!=y && y!=z && x!=z){
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
    }
    cout<<ans<<endl;


}


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

