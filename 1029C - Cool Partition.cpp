
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {

    int n;
    cin>>n;

    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    set<int>prev,total;

    int count=0;

    for(int i=0;i<n;i++){
        total.insert(a[i]);

        if(prev.count(a[i])){
            prev.erase(a[i]);
        }

        if(prev.size()==0){
            count++;
            prev=total;
        }
    }

    cout<<count<<endl;

}

int32_t main() {

    int t;
    cin >> t;

    while (t--) {

        solve();

    }

    return 0;
}
