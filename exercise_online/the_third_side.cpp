#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t; cin >> t;
	while(t--){
		ll sum = 0;
		ll n; cin >> n;
		for(int i = 0; i < n; i++){
			ll x; cin >> x;
			sum += x;
		}
		sum -= n - 1;
		cout << sum << endl;
	}
}
