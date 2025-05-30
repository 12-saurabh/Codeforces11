
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t; 
    cin >> t;

    while (t--) {

        int n, k; 
        cin >> n >> k;

        string s; 
        cin >> s;

        int zero = 0, one = 0;

        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }

        int p = n / 2;

        int count = (zero / 2) + (one / 2);

        if (k > p || k < 0) {
            cout << "NO" <<endl;
            continue;
        }


        bool f = false;

        for (int z = 0; z <= zero / 2; z++) {

            int o = k - z;

            if (o < 0 || o > one / 2) continue;

            int uz = z * 2;
            int uo = o * 2;

            int rz = zero - uz;
            int ro = one - uo;

            int b = p - k;

            if (min(rz, ro) >= b) {
                
                f = true;
                break;
            }
        }

        if(f){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
