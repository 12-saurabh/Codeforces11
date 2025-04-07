
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;


        string s;
        cin>>s;



        if(s[0]=='s'){
            s[0]='.';
        }
        if(s[n-1]=='p'){
            s[n-1]='.';
        }

        bool p=false;
        bool ss=false;

        for(int i=0;i<n;i++){
            if(s[i]=='s'){
                ss=true;
            }
            else if(s[i]=='p'){
                p=true;
            }
        }

        if(p && ss){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}

