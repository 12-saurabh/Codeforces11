
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << n << endl;

            for (int i = 4; i <= n - 2; i++) {
                cout << i << " ";
            }

            cout << "2 1 3 " << n - 1 << " " << n << endl;
        }
        else if (n == 6) {
            cout << "7" << endl;
            cout << "1 2 4 6 5 3" << endl;
        }
        else {
            int k = 1LL << (63 - __builtin_clzll(n)); 

            cout << (k << 1) - 1 << endl;

            for (int i = 4; i <= k - 3; i++) {
                cout << i << " ";
            }

            for (int i = k; i < n; i++) {
                cout << i << " ";
            }

            cout << "2 1 3 " << k - 2 << " " << k - 1 << " " << n << endl;
        }
    }

    return 0;
}
