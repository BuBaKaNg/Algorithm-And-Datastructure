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
		ll n, q; cin >> n >> q;
		vector<ll> pre(n + 1, 0);
		vector<ll> a(n + 1);
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			pre[i] = pre[i - 1]^(a[i]&1);
		}
		while(q--){
			ll l, r, k; cin >> l >> r >> k;
			bool check = (pre[n]);
			if(((r-l+1)*k)&1){
				check ^= (pre[r]^pre[l-1])^1;
			}
			else{
				check ^= (pre[r]^pre[l-1]);
			}
			if(check) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	
}
