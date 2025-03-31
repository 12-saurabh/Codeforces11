
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define l 1e6

vector<bool> p(l, true);

void prime() {
    p[0] = p[1] = false;

    for (int i = 2; i  < l; i++) {
        if (p[i]) {
            for (int j = i * i; j < l; j += i) {
                p[j] = false;
            }
        }
    }
}

bool square(int n) {
    int x = sqrt(n);
    return x * x == n;
}

int32_t main() {
    prime();
    int x, n;
    cin >> x;

    vector<int> a(x);
    for (int i = 0; i < x; i++) {
        cin >> n;
        if (n == 4) {
            cout << "YES" << endl;
        } else if (n % 2 == 0) {
            cout << "NO" << endl;
        } else if (square(n) && p[(int)sqrt(n)]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

