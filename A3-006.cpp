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
	sort(vec.begin(),vec.end(),greater<int>());
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=1;i<=200;i++){
		pq.push(i);
		for(int j=1;j<=9;j++){
			pq.push(2*i);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=(vec[i]*pq.top());
		pq.pop();
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

