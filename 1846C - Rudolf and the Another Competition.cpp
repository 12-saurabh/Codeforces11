
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
    
        pair<int,int>r;
    
        int ans=1;
    
        for(int i=0;i<n;i++){
            vector<int>v(m);
            for(int j=0;j<m;j++){
                cin>>v[j];
            }
    
            sort(v.begin(),v.end());
    
            int sum=0;
            int task=0;
            int penalty=0;
    
            for(int j=0;j<m;j++){
                if(sum+v[j]>h){
                    break;
                }
                sum+=v[j];
                penalty+=sum;
                task++;
            }
    
            if(i){
                if(make_pair(-task,penalty)<r){
                    ans++;
                }
            }
            else{
                r={-task,penalty};
            }
        }
    
        cout<<ans<<endl;
    }
    return 0;
}

