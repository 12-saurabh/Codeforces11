
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N=200005;

vector<int>a(N);
vector<int>b(N);

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
    
    
        int maxi=INT_MIN;
        for(int i=1;i<=n;i++){
            maxi=max(maxi,a[i]-b[i]);
        }
    
        int c=0;
        for(int i=1;i<=n;i++){
            if(a[i]-b[i]==maxi){
                c++;
            }
        }
    
        cout<<c<<endl;
    
        for(int i=1;i<=n;i++){
            if(a[i]-b[i]==maxi){
                cout<<i<<" ";
            }
        }
    
        cout<<endl;
    }
    return 0;
}

