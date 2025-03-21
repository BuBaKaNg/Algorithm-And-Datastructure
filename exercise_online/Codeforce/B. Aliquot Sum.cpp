#include<bits/stdc++.h>
#define ll long long
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n' // Tránh flush buffer không c?n thi?t
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
vector<ll> ans(N + 1, 0);
int main(){
	ios_fast();
	for(int i = 1; i <= N; i++){
		for(int j = i; j <= N; j+= i){
			ans[j] += i;
		}
	}
	ll n; cin >> n;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		if(x > ans[x] / 2){
			cout << "deficient";
		}
		else if( x == ans[x] / 2){
			cout << "perfect";				
		}
		else cout << "abundant";
		cout << endl;
	}
}
