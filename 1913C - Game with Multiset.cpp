#include <bits/stdc++.h>
using namespace std;

#define int long long

const int LOG = 30;
int cnt[LOG];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<string> ans;

    while (t--) {
        int type, v;
        cin >> type >> v;

        if (type == 1) {
            cnt[v]++;
        } else {
            int nw = 0;
            bool ok = true;
            int temp = v;

            for (int i = 0; i < LOG; i++) {
                int r = (v % (2ll << i)) / (1ll << i);
                if (r > nw + cnt[i]) {
                    ans.push_back("NO");
                    ok = false;
                    break;
                }
                v -= r * (1 << i); 
                nw = (nw + cnt[i] - r) / 2;
            }

            if (ok) {
                if (nw >= (temp >> 30))
                    ans.push_back("YES");
                else
                    ans.push_back("NO");
            }
        }
    }

    for (auto &x : ans) cout << x << endl;
    return 0;
}
