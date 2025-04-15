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
	vector<int> vec(k+1,0);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		vec[x]++;
		bool fnd=true;
		for(int j=1;j<=k;j++){
			if(vec[j]==0){
				fnd=false;
				break;
			}
		}
		if(fnd){
			for(int j=1;j<=k;j++) vec[j]--;
		}
	}
	int sum=0;
	for(int i=1;i<=k;i++) sum+=vec[i];
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

