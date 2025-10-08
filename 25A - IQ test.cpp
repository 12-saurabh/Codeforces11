
#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        
    int n;
    cin >> n;

    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int even=0;
    int odd=0;

    int evenindex=-1;
    int oddindex=-1;

    for(int i=1;i<=n;i++){
        if(a[i]%2==1){
            odd++;
            oddindex=i;
        }
        else{
            even++;
            evenindex=i;
        }
    }

    if(even==1){
        cout<<evenindex;
    }
    else{
        cout<<oddindex;
    }



}
