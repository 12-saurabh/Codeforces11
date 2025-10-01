
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int lzero=0;
        int lone=0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                lzero=i+1;

                cout<<lone+1<<" ";
            }
            else{
                lone=i+1;
                cout<<lzero+1<<" ";
            }
        }

        cout<<endl;
    }


}
