
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin >> t;

    while(t--){
        int n,m,p,q;
        cin>>n>>m>>p>>q;

        

        if(n%p==0){
            if(m==(n/p)*q){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
                cout<<"YES"<<endl;
        }
    }
}
