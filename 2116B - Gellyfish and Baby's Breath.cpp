
#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD=998244353;


int pc[100001];

void solve(){

    int n;
    cin>>n;

    vector<int>p(n);
    vector<int>q(n);

    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>q[i];
    }

    vector<int>posp(n);
    vector<int>posq(n);

    for(int i=0;i<n;i++){
        posp[p[i]]=i;
        posq[q[i]]=i;

    }

    vector<int>ans;

    set<int>sa,sb;

    for(int i=0;i<n;i++){
        sa.insert(p[i]);
        sb.insert(q[i]);

        int x=*sa.rbegin();
        int y=*sb.rbegin();

        pair<int,int>p1=make_pair(x,q[i-posp[x]]);
        pair<int,int>p2=make_pair(y,p[i-posq[y]]);

        pair<int,int>ansp=max(p1,p2);

        ans.push_back((pc[ansp.first]+pc[ansp.second])%MOD);


    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;



}
int32_t main() {
    int t;
    cin >> t;

    pc[0]=1;
    for(int i=1;i<=100000;i++){
        pc[i]=2*pc[i-1]%MOD;
    }

    while (t--) {
        solve();
    }

    return 0;
}
