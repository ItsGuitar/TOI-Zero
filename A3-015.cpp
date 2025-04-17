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
	vector<int> vec(n);
	for(int i=0;i<n;i++) cin>>vec[i];
	sort(vec.begin(),vec.end());
	vector<int> qs(n);
	qs[0]=vec[0];
	for(int i=1;i<n;i++) qs[i]=qs[i-1]+vec[i];
	int sum=0;
	for(int i=0;i<n;i++) sum+=(2*qs[i]);
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


