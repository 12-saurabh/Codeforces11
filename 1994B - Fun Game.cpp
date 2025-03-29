#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
        int n;
        cin>>n;
        string s,t;

        cin>>s>>t;

        for(int i=0;i<n && s[i]=='0';i++){
            if(t[i]!='0'){
                cout<<"NO"<<endl;
                return;
            }
        }

        cout<<"YES"<<endl;

        


}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
