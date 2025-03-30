#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if(i%2==1){
            if(a[i]=='1'){
                y--;
            }
            if(b[i]=='0'){
                x++;
            }
        }
        else{
            if(a[i]=='1'){
                x--;
            }
            if(b[i]=='0'){
                y++;
            }
        }
    }

    if(x>=0 && y>=0){
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
