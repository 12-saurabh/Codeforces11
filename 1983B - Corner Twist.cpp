#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
  int t;
  cin >> t;
  while(t--){
    int n,m;
    cin>>n>>m;

    char a[n][m],b[n][m];

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>b[i][j];
      }
    }


    for(int i=0;i<n-1;i++){
      for(int j=0;j<m-1;j++){
        int a1=a[i][j]-'0';
        int b1=a[i][j+1]-'0';
        int c1=a[i+1][j]-'0';
        int d1=a[i+1][j+1]-'0';
        int e=b[i][j]-'0';

        if((a1+1)%3==e){
          a[i][j]=((a1+1)%3)+'0';
          a[i][j+1]=((b1+2)%3)+'0';
          a[i+1][j]=((c1+2)%3)+'0';
          a[i+1][j+1]=((d1+1)%3)+'0';
        }

        else if((a1+2)%3==e){
          a[i][j]=((a1+2)%3)+'0';
          a[i][j+1]=((b1+1)%3)+'0';
          a[i+1][j]=((c1+1)%3)+'0';
          a[i+1][j+1]=((d1+2)%3)+'0';  
        }
      }
    }

    bool f=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(a[i][j]!=b[i][j]){
          f=false;
          break;
        }
      }
      if(f==false){
        break;
      }
    }

    if(f==true){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }


    


  }
  return 0;
}
