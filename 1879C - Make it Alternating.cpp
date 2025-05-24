
#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;

void solve(int &a, int b) {
    a = (a * 1LL * b) % MOD;
}


int main() {
   
    int t;
	cin >> t;
	
    while (t--) {
       
        string s;
	    cin >> s;
	    
        int res = 1;
	   
        int k = s.size();
	    int n = s.size();
	    
        for (int l = 0; l < n; ) {
	       
            int r = l + 1;
	       
            while(r < n && s[l] == s[r]){
                 ++r;
            }
            
            solve(res, r - l);
           
            --k;
           
            l = r;
	    }
	    
	    for (int i = 1; i <= k; ++i){
            solve(res, i);
        }
        
        cout << k << ' ' << res << endl;
	}
}
