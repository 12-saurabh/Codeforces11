
#include <bits/stdc++.h>
using namespace std;

#define int long long

bool checks(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }

    }

    if(s.size()&1){
        if(s[s.size()/2]=='1'){
            return false;
        }

    }

    return true;
}

string bits(int n){
    string ans;
    while(n){
        if(n&1){
            ans+='1';
        }
        else{
            ans+='0';
        }
        n>>=1;
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;

    string s=bits(n);

    if(checks(s)){
        cout<<"YES"<<endl;
        return;
    }
    for(int i=0;i<35;i++){
        s+='0';
        if(checks(s)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int32_t main() {
    
    int t;
    cin>>t;
    
    while(t--) {
        

        solve();
    }
    return 0;
}
