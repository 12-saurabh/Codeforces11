#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int mod=1e9;

int32_t main(){
    int t;
    cin>>t;
    while(t--){
      int n,x,y;
      cin>>n>>x>>y;

      int a=n/x;
      int b=n/y;

      int lcm=(x*y)/__gcd(x,y);

      int c=n/lcm;

      int a1=a-c;
      int b1=b-c;

      cout<<(n*(n+1)/2-(n-a1)*(n-a1+1)/2-b1*(b1+1)/2)<<endl;





    }
}
