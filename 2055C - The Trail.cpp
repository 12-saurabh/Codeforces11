#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        vector<vector<int>>A(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>A[i][j];
            }
        }

        vector<int>R(n);
        vector<int>C(m);

        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=A[i][j];
            }
            R[i]=sum;
        }

        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=A[i][j];
            }
            C[j]=sum;
        }

        int x=0,y=0;
        int count=0;

        while(count<n+m-1){
            if(s[count]=='D'){
                A[x][y]=-R[x];
                R[x]+=A[x][y];
                C[y]+=A[x][y];
                x++;
            }
            else{
                A[x][y]=-C[y];
                R[x]+=A[x][y];
                C[y]+=A[x][y];
                y++;
            }

            count++;
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }



    }
}
