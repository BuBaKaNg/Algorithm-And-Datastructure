#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, l, r, x; cin >> n >> l >> r >> x;
	ll a[n];
	ll ans = 0;
	for(ll i = 0; i < n; i++) cin >> a[i];
	for(ll mask = 0; mask < (1 << n); mask++){
		ll mi = INT_MAX;
		ll ma = INT_MIN;
		ll sum = 0;
		for(int i = 0; i < n; i++){
			if(mask & (1 << i)){
				mi = min(mi, a[i]);
				ma = max(ma, a[i]);
				sum += a[i];
			}
		}
		if(ma - mi >= x && sum >= l && sum <= r) ans++;
	}
	cout << ans << endl;
}
