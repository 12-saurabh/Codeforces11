#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;

        int n=s.length();

        int count=0;

        bool f=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else{
                count--;
            }

            if(i>0 && i<n-1 && count==0){
                f=1;
            }
        }

        if(f==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
