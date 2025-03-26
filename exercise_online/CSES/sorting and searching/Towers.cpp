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
	multiset<ll> ms;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		if(ms.empty()) ms.insert(x);
		else {
			auto it = ms.upper_bound(x);
			if(it != ms.end()){
				ms.erase(it);
			}
			ms.insert(x);
		}
	}
	cout << ms.size();
}
