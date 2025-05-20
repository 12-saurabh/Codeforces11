
#include <bits/stdc++.h>

using namespace std;

#define int long long

int ans(int n){
    int count=0;

    while(n>1){
        n=(n+1)/2;
        count++;
    }

    return count;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {

        int n,m,a,b;
        cin>>n>>m>>a>>b;

        if((n+1-a)<a){
            a=n+1-a;
        }
        if((m+1-b)<b){
            b=m+1-b;
        }

        cout<<min(1+ans(n)+ans(b),1+ans(m)+ans(a))<<endl;

    }
    return 0;
}
