
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {

    int t;
    cin >> t;
    
    while (t--) {
        
        int n,k;
        cin>>n>>k;

        vector<vector<int>>v;
        
        for(int i=0;i<n;i++){
            
            int li,ri,reali;
            cin>>li>>ri>>reali;
            vector<int>temp;
            temp.push_back(li);
            temp.push_back(ri);
            temp.push_back(reali);

            v.push_back(temp);
        }

        sort(v.begin(),v.end());

        int coin=k;

        for(int i=0;i<n;i++){
            if(v[i][0]<=coin && coin<=v[i][1]){
                coin=max(coin,v[i][2]);
            }
        }

        cout<<coin<<endl;

    
    }
    
    return 0;
}
