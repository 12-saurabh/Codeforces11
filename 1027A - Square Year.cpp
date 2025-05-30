#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {

    int t;
    cin >> t;
    while (t--) {

        string s;
        cin>>s;

        int num=stoi(s);

        double x=sqrt(num);

        if(x==(int)x){
            int a=x/2;
            int b=x-a;

            cout<<a<<" "<<b<<endl;

        }
        else{
            cout<<-1<<endl;
        }



    }
    return 0;
}
