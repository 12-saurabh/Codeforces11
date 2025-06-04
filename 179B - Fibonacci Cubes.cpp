
#include <bits/stdc++.h>
using namespace std;

#define int long long 

vector<int> fib(51);

void generate_fib() {
    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 50; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int32_t main() {

    generate_fib();

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;


        for (int i = 0; i < m; i++) {
            
            vector<int> box(3);
            
            for (int j = 0; j < 3; j++){
                cin>>box[j];
            }
            
            sort(box.begin(), box.end());

            cout<<(box[0]>=fib[n] && box[2]>=fib[n+1]);
        }
        cout << endl;
    }

    return 0;
}
