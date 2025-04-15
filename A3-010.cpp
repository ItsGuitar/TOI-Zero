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
	int n,k,t;
	cin>>n>>k>>t;
	int cnt=1,pos=1;
	while(1){
		pos+=k;
		if(pos>n) pos-=n;
		if(pos==t){
			cnt++;
			break;
		}
		else if(pos==1){
			break;
		}
		else{
			cnt++;
		}
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

