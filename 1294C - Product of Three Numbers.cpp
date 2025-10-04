
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

        set<int>st;

        for(int i=2;i*i<=n;i++){
            if(n%i==0 && !st.count(i))
            {
                st.insert(i);
                n/=i;
                break;
            }
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0 && !st.count(i))
            {
                st.insert(i);
                n/=i;
                break;
            }
        }

        if(st.size()<2 || st.count(n) || n==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;

            st.insert(n);

            for(auto i:st){
                cout<<i<<" ";
            }

            cout<<endl;
        }

    }

    return 0;
}
