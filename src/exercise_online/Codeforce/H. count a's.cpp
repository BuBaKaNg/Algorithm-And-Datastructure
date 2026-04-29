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
	string s; cin >> s;
	s = ' ' + s;
	ll q; cin >> q;
	vector<ll> pre(s.length(), 0);
	for(int i = 1; i < s.length() ;i++){
		pre[i] = pre[i - 1] + (s[i] == 'a' ? 1 : 0);
	}
	while(q--){
		ll l, r; cin >> l >> r;
		cout << pre[r] - pre[l - 1] << endl;
	}
}
