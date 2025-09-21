
#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve(){
        
    int n;
    cin>>n;

    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    bool even=false;
    bool odd=false;

    for(int i=1;i<=n;i++){
        if(a[i]%2==0){
            even=true;
        }
        else{
            odd=true;
        }
    }

    if(odd && even){
        cout<<-1<<endl;
    }
    else{
        vector<int>oper;

        for(int i=29;i>=0;i--){
            oper.push_back(1<<i);
        }
        if(even){
            oper.push_back(1);
        }
        cout<<oper.size()<<endl;
        for(int x:oper){
            cout<<x<<" ";
        }
    }

    cout<<endl;

}
int32_t main() {
   
    // For fast run the code
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){

        solve();
    }


    return 0;
}
