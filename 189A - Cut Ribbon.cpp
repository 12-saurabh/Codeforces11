
#include <bits/stdc++.h>
using namespace std;

#define int long long 
int32_t main() {
   
    // For fast run the code
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int n,a,b,c;
    cin>>n>>a>>b>>c;

    vector<int>dp(n+1,-1);

    dp[0]=0;

    for(int i=1;i<=n;i++){

        int maxi=-1;

        if(i>=a && dp[i-a]!=-1){
            maxi=max(maxi,dp[i-a]+1);
        }

        if(i>=b && dp[i-b]!=-1){
            maxi=max(maxi,dp[i-b]+1);
        }

        if(i>=c && dp[i-c]!=-1){
            maxi=max(maxi,dp[i-c]+1);
        }

        dp[i]=maxi;
    }

    cout<<dp[n]<<endl;

    return 0;
}
