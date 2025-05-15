
#include <bits/stdc++.h>
using namespace std;

#define int long long 

void f(int r,int c,int n,int val,vector<vector<int>>&a){
    if(r==n || c==n || r<0 || c<0 || a[r][c]!=-1){
        return;
    }

    a[r][c]=val--;

    while(c+1<n && a[r][c+1]==-1){
        a[r][++c]=val--;
    }

    while(r+1<n && a[r+1][c]==-1){
        a[++r][c]=val--;
    }

    while(c>0 && a[r][c-1]==-1){
        a[r][--c]=val--;
    }

    while(r>0 && a[r-1][c]==-1){
        a[--r][c]=val--;
    }

    f(r,c+1,n,val,a);
}

int32_t main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<vector<int>>a(n,vector<int>(n,-1));

        f(0,0,n,n*n-1,a);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}
