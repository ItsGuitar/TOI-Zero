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
	int n;
	cin>>n;
	vector<int> vec(n+1),sum(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>vec[i];
		sum[i]=sum[i-1]+vec[i];
	}
	set<int> s;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			s.insert(sum[j]-sum[i-1]);
		}
	}
	cout<<sz(s);
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

