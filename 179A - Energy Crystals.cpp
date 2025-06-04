#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;

        cout<<2*(64-__builtin_clzll(x))+1<<endl;
    }
}
