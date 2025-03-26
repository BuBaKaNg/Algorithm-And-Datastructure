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
	int n; cin >> n;
	set<ll> se;
	while(n--){
		ll x; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
}
