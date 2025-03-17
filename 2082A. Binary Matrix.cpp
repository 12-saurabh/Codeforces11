#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        vector<int> ro(n, 0);
        vector<int> co(m, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] == '1') {
                    ro[i]++;
                    co[j]++;
                }
            }
        }

        int r = 0, c = 0;
        for (int i = 0; i < n; ++i) {
            if (ro[i] % 2 != 0) {
                r++;
            }
        }
        for (int j = 0; j < m; ++j) {
            if (co[j] % 2 != 0) {
                c++;
            }
        }


        cout << max(r, c) << endl;
    }

    return 0;
}
