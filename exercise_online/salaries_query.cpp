#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

vector<ll> BIT(N);
ll n;
void updatePoint(ll u, ll v){
	ll idx = u;
	while(idx <= n){
		BIT[idx] += v;
		idx += (idx&-idx);
	}
}

ll getSum(ll u){
	ll idx = u, ans = 0;
	while(idx > 0){
		ans += BIT[idx];
		idx -= (idx&-idx);
	}
	return ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll q; cin >> n >> q;
	vector<ll> a(n + 1);
	vector<ll> C(n + 1);
	for(int i = 1; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	ll val = 0;
	C[1] = val;
	map<ll,ll> mp;
	mp[a[1]] = 0;
	for(int i = 2; i <= n; i++){
		if(a[i] != a[i - 1]){
			val++;
			C[i] = val;
		}
		else{
			C[i] = val;
		}
		mp[a[i]] = C[i];
	}
	for(int i = 1; i <= n; i++){
		updatePoint(C[i], 1);
	}
	while(q--){
		char t; cin >> t;
		ll x, y; cin >> x >> y;
		if(t == '!'){
			updatePoint(C[x], -1);
			updatePoint(C[y], 1);
		}
		else{
			ll t = getSum(x);
			ll z = getSum(y - 1);
			cout << z - t << endl;
		}
	}
	
}
