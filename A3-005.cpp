#include<bits/stdc++.h>
#define TC while(t--)
#define DEBUG(x) cout<<"Debug "<<#x<<':'<<x<<endl;
#define EL "\n"
#define ll long long
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define st first
#define nd second
#define pb push_back
using namespace std;
void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}
void solve(){
	int n,m;
	cin>>n>>m;
	vector<int> vec(n+2,0);
	for(int i=1;i<=m;i++){
		int s,t;
		cin>>s>>t;
		vec[s]++;
		vec[t+1]--;
	}
	int ma=0,sum=0;
	for(int i=1;i<=n;i++){
		sum+=vec[i];
		ma=max(ma,sum);
	}
	cout<<ma;
}
int main(){
	fast();
	solve();
	/*int t;
	cin>>t;
	TC{
		solve();
	}*/
	return 0;
}

