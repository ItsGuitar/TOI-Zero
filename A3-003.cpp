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
#define pi 3.1415926535
using namespace std;
void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
}
void solve(){
	int n;
	cin>>n;
	int cnt=0;
	vector<int> a(n+1),b(n+1);
	a[0]=b[0]=1;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=0;i<n;i++){
		int A=a[i],B=a[i+1],C=b[i],D=b[i+1];
		if(A>B) swap(A,B);
		if(C>D) swap(C,D);
		if(A==C and B==D){
			cnt++;
			continue;
		}
		if(A==C or B==D or A==D or B==C) continue;
		int tmp=0;
		if(A<C and C<B) tmp++;
		else if(A<D and D<B) tmp++;
		if(C<A and A<D) tmp++;
		else if(C<B and B<D) tmp++;
		if(tmp==2) cnt++;
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

