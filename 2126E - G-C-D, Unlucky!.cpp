
#include <bits/stdc++.h>
using namespace std;

#define int long long

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n + 1), s(n + 1), ans(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        for (int i = 1; i <= n; i++) {
            cin >> s[i];
        }

        for (int i = n; i >= 1; i--) {
            ans[i] = lcm(p[i], s[i]);  
        }

        bool ch = true;

        if (ans[1] != p[1]) ch = false;
        if (ans[n] != s[n]) ch = false;

        for (int i = 2; i <= n; i++) {
            if (__gcd(p[i - 1], ans[i]) != p[i]) {
                ch = false;
            }
        }

        for (int i = n - 1; i >= 1; i--) {
            if (__gcd(s[i + 1], ans[i]) != s[i]) {
                ch = false;
            }
        }

        cout << (ch ? "YES" : "NO") << endl;
    }

    return 0;
}
