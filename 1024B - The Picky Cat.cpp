
#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int count=0;
        for(int i=0;i<n;i++){
            count+=abs(a[i])<abs(a[0]);
        }

        if(count<=n/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }






    }

    return 0;
}
