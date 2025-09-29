
#include <bits/stdc++.h>
using namespace std;

#define int long long


int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    
    while (t--) {

        int x;
        cin>>x;

        vector<int>a;

        a.push_back(x);

        while(__builtin_popcount(x)>1){

            int p=__builtin_ctz(x);
            x-=pow(2,p);

            a.push_back(x);

        }

        while(x>1){
            x=x/2;
            a.push_back(x);
        }

        int k=a.size();

        cout<<k<<endl;

        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }

}

