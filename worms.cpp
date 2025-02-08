#include <bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int sum=a[0];
    for(int i=1;i<n;i++){
        sum+=a[i];
        a[i]=sum;
    }

    for(int i=0;i<m;i++){
        int s=0;
        int e=n-1;
        int ans=0;
        while(s<=e){
            int mid=(s+e)/2;
            if(b[i]<=a[mid]){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
}
