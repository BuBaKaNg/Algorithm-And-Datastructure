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
		ll n, a, b; cin >> n >> a >> b;
		ll gc = __gcd(a, b);
		ll lc = a*b / gc;
		ll c[n];
		
		ll mi = INT_MAX;
		ll ma = INT_MIN;
		for(int i = 0; i < n; i++) cin >> c[i];	
		for(int i = 0; i < n; i++){
			ll x = (lc - c[i] + gc - 1)/gc;
			mi = min(abs(lc - c[i] - x*gc), mi);
			ma = max(ma, mi);
			cout << i << " " << mi << " " << ma << endl;
		}
		cout << endl;
		cout << ma - mi << endl;
	}
}
