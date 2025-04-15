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
	int n,s;
	cin>>n>>s;
	vector<int> vec(n+1);
	vector<bool> visited(n+1,false);
	for(int i=1;i<=n;i++){
		cin>>vec[i];
	}
	queue<int> q;
	visited[s]=true;
	q.push(s);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int v=vec[u];
		if(!visited[v]){
			visited[v]=true;
			q.push(v);
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		cnt+=visited[i];
	}
	cout<<cnt;
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

