
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){

    int t; 
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int last = -1e9; 

        for (int x : a) {
            if (x > last + 1) {
                count++;
                last = x;
            }
        }
        cout << count << endl;
    }
    return 0;
}
