
#include <bits/stdc++.h>
using namespace std;

bool dfs(int r, int c, const string &s1, const string &s2, vector<vector<int>> &vis, int n) {
    if (r < 0 || r >= 2 || c < 0 || c >= n || vis[r][c]) return false;

    vis[r][c] = 1;

    if (r == 1 && c == n - 1) return true;

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr < 0 || nr >= 2 || nc < 0 || nc >= n) continue;

        char arrow = (nr == 0 ? s1[nc] : s2[nc]);
        int fr = nr, fc = nc;

        if (arrow == '<') fc--;
        else if (arrow == '>') fc++;

        if (fr >= 0 && fr < 2 && fc >= 0 && fc < n) {
            if (dfs(fr, fc, s1, s2, vis, n)) return true;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s1, s2;
        cin >> s1 >> s2;

        vector<vector<int>> vis(2, vector<int>(n, 0));
        bool canReach = dfs(0, 0, s1, s2, vis, n);

        cout << (canReach ? "YES" : "NO") << "\n";
    }

    return 0;
}
