
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        
        
        int n;
        string s;
        
        cin>>n>>s;

        

        bool f=0;

        for(int i=1;i<n-1;i++){
            
            map<char,int>mp;

            for(int j=0;j<n;j++){
                if(j!=i){
                    mp[s[j]]++;
                }
            }
            
            if(mp[s[i]]>0){
                f=1;
                break;
            }
        }

        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }
    return 0;
}
