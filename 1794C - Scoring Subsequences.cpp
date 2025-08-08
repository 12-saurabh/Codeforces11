
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
        cin>>n;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int>ans;

        for(int i=0;i<n;i++){
            int left=1;
            int right=i+1;

            while(left<=right){
                int mid=(left+right)/2;

                if(a[i-mid+1]>=mid){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            ans.push_back(right);
        }

        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }




}
