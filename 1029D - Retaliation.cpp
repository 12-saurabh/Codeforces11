
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

    if(2*a[0]-a[1]<0 || (2*a[0]-a[1])%(n+1)!=0){
        cout<<"NO"<<endl;
        continue;
    }


    int x2=(2*a[0]-a[1])/(n+1);
    int x1=a[0]-n*x2;

    if(x1<0){
        cout<<"NO"<<endl;
        continue;
    }

    bool f=1;
    for(int i=1;i<=n;i++){
        if(a[i-1]-x1*i-x2*(n-i+1)!=0){
            f=0;
        }
    }

    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    }

    return 0;
}
