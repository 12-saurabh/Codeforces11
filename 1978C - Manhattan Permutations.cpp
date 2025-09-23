#include <bits/stdc++.h>
using namespace std;

#define int long long

const int LOG = 30;
int cnt[LOG];

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int maxi=0;
        for(int i=0;i<n;i++){
            maxi+=abs((n-1-i)-i);
        }

        if(k%2!=0 || k>maxi){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            cout<<"YES"<<endl;

            vector<int>p(n);
            for(int i=0;i<n;i++){
                p[i]=i;
            }

            k=k/2;

            for(int i=0;k>0 && i<n;i++){
                int cost=n-1-2*i;

                if(k>=cost){
                    swap(p[i],p[n-1-i]);
                    k-=cost;
                }
                else{
                    swap(p[i],p[i+k]);
                    k=0;
                }
            }
            for(int i=0;i<n;i++){
                cout<<p[i]+1<<" ";
            }
            cout<<endl;

        }

    }
}
