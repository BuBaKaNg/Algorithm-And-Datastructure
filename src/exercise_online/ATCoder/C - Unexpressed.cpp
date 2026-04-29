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
	ll N;
	cin >> N;
	ll ans = N;
	ll temp = 4;
	set<ll> se;
	for(ll i = 2; i*i <= N; i++){
		for(ll j = 2; pow(i, j) <= N; j++){
			se.insert(pow(i, j));
		}
	}
	cout << N - se.size() << endl;
}
