#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve(){

        int n;
        cin>>n;
        int k;
        cin>>k;

        string s;
        cin>>s;


        string ss=s;
        reverse(ss.begin(),ss.end());

        if(s<ss || (k>=1 && *min_element(s.begin(),s.end()) != *max_element(ss.begin(),ss.end()))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
