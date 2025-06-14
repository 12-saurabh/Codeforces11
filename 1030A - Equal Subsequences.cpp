
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >>n>>k;

        for(int i=0;i<k;i++){
            cout<<'1';
        }
        for(int i=0;i<n-k;i++){
            cout<<'0';
        }
        cout<<endl;
    }
}

int main() {

    solve();
    return 0;
}
