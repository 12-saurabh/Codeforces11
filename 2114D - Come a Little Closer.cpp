
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int rect(int minx,int maxx,int miny,int maxy){
    int h=maxx-minx+1;
    int w=maxy-miny+1;

    if(h*w<n){
        return min((h+1)*w,h*(w+1));
    }
    return h*w;
}

int32_t main() {

    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    
    
    int t; cin >> t;
    while (t--) {
         cin >> n;
        vector<pair<int, int>> x(n),y(n);

        for(int i=0;i<n;i++){
            cin>>x[i].first>>y[i].first;

            x[i].second=y[i].second=i;
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        int ans=rect(x[0].first,x[n-1].first,y[0].first,y[n-1].first);

        if(n==1){
            cout<<ans<<endl;
            continue;

        }

        set<int>st={x[0].second,x[n-1].second,y[0].second,y[n-1].second};

        for(int i:st){
            int min_x;
            if(x[0].second==i){
                min_x=x[1].first;
            }
            else{
                min_x=x[0].first;
            }

            int max_x;
            if(x[n-1].second==i){
                max_x=x[n-2].first;
            }
            else{
                max_x=x[n-1].first;
            }

            int min_y;
            if(y[0].second==i){
                min_y=y[1].first;
            }
            else{
                min_y=y[0].first;
            }

            int max_y;
            if(y[n-1].second==i){
                max_y=y[n-2].first;
            }
            else{
                max_y=y[n-1].first;
            }

            ans=min(ans,rect(min_x,max_x,min_y,max_y));

        }

        cout<<ans<<endl;


    }
}
