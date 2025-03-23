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
	ll n; cin >> n;
	vector<ll> a(n + 1);
	vector<ll> pre1(n + 1, 0);
	vector<ll> pre2(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pre1[i] = pre1[i - 1] + a[i];
	}
	sort(a.begin(), a.end());
	for(int i = 1; i <= n; i++){
		pre2[i] = pre2[i - 1] + a[i];
	}
	ll q; cin >> q;
	while(q--){
		ll t, l, r; cin >> t >> l >> r;
		if(t == 1){
			cout << pre1[r] - pre1[l - 1] << endl;
		}
		else cout << pre2[r] - pre2[l - 1] << endl;
	}
}
