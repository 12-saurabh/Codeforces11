
#include <bits/stdc++.h>
using namespace std;

#define int long long 
int32_t main() {
   
    // For fast run the code
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        

        int n;
        cin>>n;

        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        unordered_map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            mp[b[i]].push_back(i);
        }

        vector<int>a(n,0);

        int curr=1;
        bool flag=true;

        for(auto i:mp){
            int k=i.first;

            auto index=i.second;

            if(index.size()%k!=0){
                flag=false;
                break;
            }


            for(int i=0;i<index.size();i+=k){
                for(int j=0;j<k;j++){
                    a[index[i+j]]=curr;
                }
                curr++;
            }
        }

        if(flag){
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<' ';
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
 
    }
    return 0;
}
