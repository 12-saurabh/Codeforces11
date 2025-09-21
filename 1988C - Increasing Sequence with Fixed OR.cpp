
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int t;
    cin>>t;

    while(t--){
        
        int n;
        cin >> n;

        vector<int>a;

        for(int i=62;i>=0;i--){
            int x=1ll<<i;

            if((x&n)==x && x!=n)
            {
                a.push_back(n-x);
            }
        }

        a.push_back(n);

        cout<<a.size()<<endl;
        for(auto i:a){
            cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}
