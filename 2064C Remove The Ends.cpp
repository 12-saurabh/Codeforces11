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

        vector<int>p(n),s(n);

        if(a[0]>0){
            p[0]=a[0];
        }

        for(int i=1;i<n;i++){
            p[i]=p[i-1];
            if(a[i]>0){
                p[i]+=a[i];
            }
        }

        if(a[n-1]<0){
            s[n-1]-=a[n-1];
        }

        for(int i=n-2;i>=0;i--){
            s[i]=s[i+1];
            if(a[i]<0){
                s[i]-=a[i];
            }
        }
        
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,p[i]+s[i]);
        }

        cout<<maxi<<endl;






    }
    return 0;
}
