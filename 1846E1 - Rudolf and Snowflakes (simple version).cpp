#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin>>t;

    while (t--) {

        int n;
        cin>>n;

        int f=0;

        for(int i=2;i<=1000;i++){
            int x=1+i+i*i;

            int y=3;

            while(x<=n){
                if(x==n){
                    f=1;
                    break;
                }
                x+=pow(i,y);
                y++;
            }

            if(f){
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
}
