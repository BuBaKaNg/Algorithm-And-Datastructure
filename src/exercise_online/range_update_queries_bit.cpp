#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

vector<ll> diff(N);
vector<ll> bit(N);

ll n;
ll getSum(ll u){
	ll idx = u, ans = 0;
	while(idx > 0){
		ans += bit[idx];
		idx -= (idx&-idx);
	}
	return ans;
}

void updatePoint(ll u, ll v){
	ll idx = u;
	while(idx <= n){
		bit[idx] += v;
		idx += (idx&(-idx));
	}
}

void updateRange(ll u, ll v, ll s){
	updatePoint(u, s);
	updatePoint(v + 1, -s);
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll q; cin >> n >> q;
	vector<ll> a(n + 1);
	for(ll i = 1; i <= n; i++){
		cin >> a[i];
	}
	diff[1] = a[1];
	for(ll i = 2; i <= n; i++){
		diff[i] = a[i] - a[i - 1];
	}
	for(ll i = 1; i <= n; i++){
		updatePoint(i, diff[i]);
	}
	while(q--){
		int t; cin >> t;
		if(t == 2){
			ll x;
			cin >> x;
			ll ans = getSum(x);
			cout << ans << endl;
		}
		else{
			ll x, y, u;
			cin >> x >> y >> u;
			updateRange(x, y, u);
		}
	}
}
