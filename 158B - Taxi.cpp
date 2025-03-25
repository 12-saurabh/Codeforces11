#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
        int n;
        cin>>n;

        vector<int>a(n),f(5,0);


        for(int i=0;i<n;i++){
            cin>>a[i];
            f[a[i]]++;
        }

        int t=f[4]+f[3]+f[2]/2;
        f[1]-=f[3];

        if(f[2]%2==1){
            t++;
            f[1]-=2;
        }

        if(f[1]>0){
            t+=(f[1]+3)/4;
        }
    
        cout<<t<<endl;
}
