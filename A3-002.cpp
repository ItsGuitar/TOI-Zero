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
	int y=ceil(sqrt(n)),x=n-(ceil(sqrt(n))-1)*(ceil(sqrt(n))-1);
	int cnt=0;
	while(x!=1 or y!=1){
		//to the left
		if(x!=1){
			if(x%2==0){
				y--;
				x--;
				cnt++;
			}
			else{
				x--;
				cnt++;
			}
		}
		else{
			x++;
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

