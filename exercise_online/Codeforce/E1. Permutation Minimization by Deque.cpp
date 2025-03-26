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
		ll n; cin >> n;
		deque<ll> dq;
		for(int i = 0; i < n; i++){
			ll x; cin >> x;
			if(x > dq.front()){
				dq.push_back(x);
			}
			else dq.push_front(x);
		}
		for(auto x : dq){
			cout << x << " ";
		}
		cout << endl;
	}
}
