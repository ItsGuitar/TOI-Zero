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
struct Node{
	bool is_left,is_right;
	int left,right;
};
ll sum=0;
vector<Node> bars;
ll dfs(int idx){
	if(idx==0) return 0;
	ll l,r;
	if(bars[idx].is_left){
		l=bars[idx].left;
	}
	else{
		l=dfs(bars[idx].left);
	}
	if(bars[idx].is_right){
		r=bars[idx].right;
	}
	else{
		r=dfs(bars[idx].right);
	}
	if(l>r){
		ll dif=l-r;
		sum+=dif;
		r+=dif;
	}
	else if(r>l){
		ll dif=r-l;
		sum+=dif;
		l+=dif;
	}
	return l+r;
}
void solve(){
	int n;
	cin>>n;
	bars.resize(n+1);
	for(int i=1;i<=n;i++){
		int a,l,b,r;
		cin>>a>>l>>b>>r;
		bars[i].is_left=(a==1);
		bars[i].left=l;
		bars[i].is_right=(b==1);
		bars[i].right=r;
	}
	dfs(1);
	cout<<sum<<EL;
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

