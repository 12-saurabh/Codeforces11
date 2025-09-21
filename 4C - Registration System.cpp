
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string,int> mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        if (mp[s] > 0) {
            cout << s << mp[s] <<endl;
        } 
        else {
            cout << "OK"<< endl;
        }
       
        mp[s]++;
    }

    return 0;
}
