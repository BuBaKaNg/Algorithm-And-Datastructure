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
		ll n, k; cin >> n >> k;
		vector<ll> a(n + 1);
		vector<ll> s(n + 1);
		for(ll i = n - k + 1; i <= n; i++){
			cin >> s[i];
		}
		if(k == 1 || n - k + 2 > n){
			cout << "YES" << endl;
			continue;
		} 
		
		for(ll i = n - k + 2; i <= n; i++){
			a[i] = s[i] - s[i - 1]; 
		}
		
		if(!is_sorted(a.begin() + n - k + 2, a.end())){
			cout << "NO" << endl;
			continue;
		}
		if(s[n - k + 1] > (n - k + 1)*a[n - k + 2]){
			cout << "NO" << endl;
			continue;			
		}
		cout << "YES" << endl;
	}
}
