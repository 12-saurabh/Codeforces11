
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    
    int t;
    
    cin>>t;
    
    while(t--){

        string l,r;
        cin>>l>>r;

        if(l==r){
            cout<<2*l.size()<<endl;
            continue;
        }

        int p=0;

        while(p<l.size() && l[p]==r[p]){
            p++;
        }

        if(l[p]+1<r[p]){
            cout<<2*p<<endl;
        }

        else{
            int ans=2*p+1;
            for(int i=p+1;i<l.size();i++){
                if(l[i]=='9' && r[i]=='0'){
                    ans++;
                }
                else{
                    break;
                }
            }

            cout<<ans<<endl;

        }




    }
}
