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
	ll n, t; cin >> n >> t;
	multiset<ll> ms; 
	for(ll i = 0; i < n; i++){
		ll x; cin >> x;
		ms.insert(-x);
	}
	for(ll i = 0; i < t; i++){
		ll x; cin >> x;
		auto it = ms.lower_bound(-x);
		if(it == ms.end()){
			cout << "-1" << endl;
		}
		else{
			cout << -(*it) << endl;
			ms.erase(it);
		}
	}
}
