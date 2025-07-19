

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; 
    cin >> T;
    while(T--){
        
        int n;
        cin >> n;
        
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int g = 0;
        for(int x : a) g = __gcd(g, x);
        
        int countG = 0;
        for(int x : a) if(x == g) countG++;
        
        if(countG > 0){
            cout << (n - countG) << "\n";
            continue;
        }
        
        for(int &x : a) x /= g;
        
        sort(a.begin(), a.end());
        
        a.erase(unique(a.begin(), a.end()), a.end());
        
        const int MAXV = 5001;
        
        vector<int> dp(MAXV, INT_MAX);
        
        queue<int> q;
        
        for(int x : a){
            dp[x] = 0;
            q.push(x);
        }
        
        while(!q.empty() && dp[1] == INT_MAX){
            int cur = q.front(); 
            q.pop();
            for(int x : a){
                int nw = __gcd(cur, x);
                if(dp[nw] == INT_MAX){
                    dp[nw] = dp[cur] + 1;
                    if(nw == 1) {
                        break;
                    }
                    q.push(nw);
                }
            }
        }
        
        int d = dp[1]; 
        cout << (n + d - 1) << "\n";
    }
    return 0;
}
