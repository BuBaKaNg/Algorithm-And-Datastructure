#include<bits/stdc++.h>
#define ll long long
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n' // Tránh flush buffer không c?n thi?t
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_fast();
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n + 1];
		for(ll i = 0; i < n; i++){
			cin >> a[i];
		}
		ll ans = a[0];
		for(ll i = 0; i < n; i++){
			ans = __gcd(ans, a[i]);
		}
		if(ans == 1) {
			cout << 0 << endl;
		}
		else{
			if(__gcd(ans, n) == 1){
				cout << 1 << endl;
			}
			else if(__gcd(ans, n - 1) == 1) cout << 2 << endl;
			else cout << 3 << endl;
		}	
	}
}
