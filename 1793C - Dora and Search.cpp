#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int l=0;
        int r=n-1;

        int mini=1;
        int maxi=n;

        while(l<=r){
            if(a[l]==mini){
                mini++;
                l++;
            }
            else if(a[l]==maxi){
                maxi--;
                l++;
            }
            else if(a[r]==mini){
                r--;
                mini++;
            }
            else if(a[r]==maxi){
                r--;
                maxi--;
            }
            else{
                break;
            }
        }

        if(l<=r){
            cout<<l+1<<" "<<r+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}
