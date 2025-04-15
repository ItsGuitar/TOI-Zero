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
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];
	ll ans=0;
	unordered_map<int,int> mp;
	int l=0,cnt=0;
	for(int r=0;r<n;r++){
		if(mp[vec[r]]==0) cnt++;
		mp[vec[r]]++;
		while(cnt>=k){
			ans+=(n-r);
			mp[vec[l]]--;
			if(mp[vec[l]]==0) cnt--;
			l++;
		}
	}
	cout<<ans;
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

