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
		map<pair<ll,ll>,ll> mp;
		ll n; cin >> n;
		string s; cin >> s;
		ll k = 0, d = 0;
		for(int i = 0; i < n; i++){
			s[i] == 'D' ? d++ : k++;
			pair<ll, ll> p = {d/__gcd(d, k), k / __gcd(d, k)};
			mp[p]++;
			cout << mp[p] << " ";
		}
		cout << endl;
		
	}
}
