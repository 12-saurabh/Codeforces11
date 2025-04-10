#include<bits/stdc++.h>

using namespace std;

#define int long long

void f(int x,map<int,int>&mp){
    int i=2;
    while(i*i<=x){
        while(x%i==0){
            mp[i]++;
            x/=i;
        }
        i++;
    }

    if(x>1){
        mp[x]++;
    }
}
bool solve()
{
    int n;
    cin>>n;

    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];

        f(a[i],mp);
    }

    for(auto i:mp){
        if(i.second%n!=0){
            return false;
        }
    }
    return true;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        if(solve()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
