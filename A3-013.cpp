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
	int ma,mi;
	ma=mi=s;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x%3==0 and x%4!=0){
			ma-=(x/3*10);
			mi-=(x/3*10);
		}
		else if(x%4==0 and x%3!=0){
			ma-=(x/4*10);
			mi-=(x/4*10);
		}
		else if(x%12==0){
			ma-=(x/4*10);
			mi-=(x/3*10);
		}
	}
	cout<<mi<<" "<<ma;
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

