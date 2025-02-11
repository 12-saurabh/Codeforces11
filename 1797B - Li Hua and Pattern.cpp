#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<vector<char>>v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }

        int diff=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]!=v[n-1-i][n-1-j]){
                    diff++;
                }
            }
        }
        diff=diff/2;
        if(diff>k){
            cout<<"NO"<<endl;
        }
        else{
            k-=diff;
            if(n%2==1){
                cout<<"YES"<<endl;
            }
            else if(k%2==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }

    return 0;
}
