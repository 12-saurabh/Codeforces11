
#include <iostream>
using namespace std;


int main() {
    long t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        
        if (n == 1 && k == 1) {
            cout << "1 1" << endl;
        } else if (k == 1 || k == n) {
            cout << "-1" << endl;
        } else if (k % 2) {
            cout << "3\n1 " << k - 1 << " " << k + 2 << endl;
        } else {
            cout << "3\n1 " << k << " " << k + 1 << endl;
        }
    }
    return 0;
}
