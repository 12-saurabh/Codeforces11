
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());

    int l = 0, r = n - 1;

    while (l < n && a[l] == sorted_a[l]) l++;

    while (r >= 0 && a[r] == sorted_a[r]) r--;

    if (l >= r) {
       
        cout << "yes" <<endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == sorted_a) {
        
        cout << "yes" <<endl;
        cout << l + 1 << " " << r + 1 << endl;
    } 
    else {
        cout << "no" <<endl;
    }

    return 0;

}
