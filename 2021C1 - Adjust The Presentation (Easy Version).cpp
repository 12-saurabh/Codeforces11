
#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve(){
        
        int n,m,q;
        cin>>n>>m>>q;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int>b(m);
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        vector<int>index(n+1);

        for(int i=0;i<n;i++){
            index[a[i]]=i;
        }

        int count=0;

        map<int,int>mp;

        for(int i=0;i<m;i++){
            int req=index[b[i]];

            if(mp.find(b[i])!=mp.end()){
                continue;
            }

            if(count==req){
                count++;
                mp[b[i]]=true;
            }
            else{
                cout<<"TIDAK"<<endl;
                return;
            }
        }

        cout<<"YA"<<endl;


}
int32_t main() {
   
    // For fast run the code
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        solve();
    }


    return 0;
}
