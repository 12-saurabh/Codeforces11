#include <bits/stdc++.h>
using namespace std;
#define int long long


void solve() {
    int n;
    cin>>n;

    vector<int>a(n);
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(even==0 || odd==0){
        int ans=*max_element(a.begin(),a.end());
        cout<<ans<<endl;
        return;
    }

    int ans=accumulate(a.begin(),a.end(),0ll)-(odd-1);
    cout<<ans<<endl;



}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
