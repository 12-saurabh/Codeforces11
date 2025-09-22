
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


        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int allneg=1;
        for(int i=0;i<n;i++){
            allneg&=(a[i]<0);
        }

        if(allneg){
            cout<<*max_element(a.begin(),a.end())<<endl;
            continue;
        }
        else{
            
            int odd=0;
            int even=0;

            for(int i=0;i<n;i++){
                if(i%2==1){
                    odd+=max(a[i],0ll);
                }
                else{
                    even+=max(a[i],0ll);
                }
            }

            cout<<max(odd,even)<<endl;
        }

    }

    return 0;
}
