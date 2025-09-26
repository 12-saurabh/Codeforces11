

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
            int n;
        cin>>n;

        string s;
        cin>>s;

        if(n&1){
            cout<<-1<<endl;
            return;
        }

        deque<bool>dq;
        for(char a:s){
            dq.push_back((a=='1'));
        }

        vector<int>pos;
        int i=0;

        while(!dq.empty() && pos.size()<=300){
            if(dq.front()==dq.back()){
                if(dq.front()!=1){
                    pos.push_back(i+dq.size());
                    dq.pop_front();
                    dq.push_back(0);
                }
                else{
                    pos.push_back(i);
                    dq.push_front(1);
                    dq.pop_back();
                }
            }
            else{
                dq.pop_front();
                dq.pop_back();
            }
            i+=1;
        }

        if(pos.size()>300){
            cout<<-1<<endl;

            return;
        }
        
        
        cout<<pos.size()<<endl;
        for(auto i:pos){
            cout<<i<<" "; 
        }
        cout<<endl;
}

int32_t main() {

    // For Fast Run the Code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {

        solve();

    }
    
    return 0;
}
