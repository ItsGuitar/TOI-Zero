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
	int n,l;
	cin>>l>>n;
	cout<<ceil((sqrt(l*l+8*l*l*n)-(double)l)/(2.0*l*l));
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

