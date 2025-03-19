#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while(t--){
		ll a, b; cin >> a >> b;
		if(a % b == 0) cout << 0 << endl;
		else{
			ll x = a / b;
			x = b * (x + 1);
			cout << x - a << endl;
		}
	}
}
