
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    
    while (t--) {
        
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        map<int,int>mp;

        for(int i=0;i<n;i++){
            for(int j=2;j*j<=a[i];j++){
                while(a[i]%j==0){
                    a[i]/=j;
                    mp[j]++;
                    
                }
            }

            if(a[i]!=1){
                mp[a[i]]++;
            }
        }

        int ans=0;
        int rem=0;

        for(auto i:mp){
            int num=i.first;
            int count=i.second;

            ans+=count/2;
            rem+=count%2;
        }

        ans+=rem/3;

        cout<<ans<<endl;




    }

}
