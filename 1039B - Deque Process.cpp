
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int i=0;
        int j=n-1;

        bool f=true;
        string s;

        while(i<j){
            if(f){
                int mini=min(a[i],a[j]);
                if(a[i]==mini){
                    s.push_back('L');
                    i++;
                }
                else{
                    s.push_back('R');
                    j--;
                }
                f=false;

            }
            else{
                int maxi=max(a[i],a[j]);
                if(a[i]==maxi){
                    s.push_back('L');
                    i++;
                }
                else{
                    s.push_back('R');
                    j--;
                }
                f=true;
            }
        }
        s.push_back('L');

        cout<<s<<endl;
    }

    return 0;
}
