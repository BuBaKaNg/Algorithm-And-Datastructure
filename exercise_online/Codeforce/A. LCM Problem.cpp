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
		ll x, y; cin >> x >> y;
		if(x*2 > y) cout << -1 << " " << -1 << endl;
		else cout << x << " " << x*2 << endl;
	}
}
