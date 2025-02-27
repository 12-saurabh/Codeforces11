#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<int>a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int maxi=0;
		int x=0;
		for(int i=0;i<n;i++){
			if(a[i]<0){
				x++;
				a[i]=-a[i];
			}
			maxi+=a[i];
			
		}
		sort(a.begin(),a.end());
		if(x%2==1){
			maxi-=2*a[0];
		}
		cout<<maxi<<endl;
	}
}


