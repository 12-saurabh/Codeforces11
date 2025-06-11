
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

    int n,x;
    cin>>n>>x;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int first=-1;
    int last=-1;

    for(int i=0;i<n;i++){
        if(a[i]==1 && first==-1){
            first=i;
        }

        if(a[i]==1){
            last=i;
        }
    }

    if(first==-1 || last-first+1<=x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int32_t main() {

    int t;
    cin >> t;

    while (t--) {

        solve();

    }

    return 0;
}
