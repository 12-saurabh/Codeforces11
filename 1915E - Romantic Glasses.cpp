
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2==1){
            a[i]*=-1;
        }
    }

    set<int>s{0};

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(s.find(sum)!=s.end()){
            cout<<"YES"<<endl;
            return;
            
        }
        s.insert(sum);
    }

    cout<<"NO"<<endl;

}


int32_t main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

