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
	ll n, q; cin >> n >> q;
	vector<ll> a(n + 1);
	vector<ll> pre(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
	} 
	while(q--){
		ll l, r; cin >> l >> r;
		cout << pre[r] - pre[l - 1] << endl;
	}
	
}
