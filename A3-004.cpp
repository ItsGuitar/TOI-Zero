#include<bits/stdc++.h>
#define TC while(t--)
#define DEBUG(x) cout<<"Debug "<<#x<<':'<<x<<endl;
#define EL "\n"
#define ll long long
#define pii pair<ll,ll>
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
	vector<pii> vec(n);
	vector<ll> tmp_x(n),tmp_y(n);
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		vec[i].st=x+y;
		vec[i].nd=x-y;
		tmp_x[i]=vec[i].st;
		tmp_y[i]=vec[i].nd;
	}
	//
	sort(tmp_x.begin(),tmp_x.end());
	sort(tmp_y.begin(),tmp_y.end());
	ll med_x,med_y;
	med_x=(n%2)?(tmp_x[n/2]):(tmp_x[n/2-1]+tmp_x[n/2])/2.0;
	med_y=(n%2)?(tmp_y[n/2]):(tmp_y[n/2-1]+tmp_y[n/2])/2.0;
	ll sum=0;
	for(int i=0;i<n;i++){
		sum+=abs(med_x-vec[i].st)+abs(med_y-vec[i].nd);
	}
	cout<<sum;
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

