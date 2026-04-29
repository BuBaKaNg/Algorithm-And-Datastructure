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
	ll n, k; cin >> n >> k;
	vector<ll> pre(n + 1, 0);
	vector<ll> a(n + 1);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
	}
	ll ans = INT_MAX;
	ll idx = -1;
	for(int i = k; i <= n; i++){
		if(pre[i] - pre[i - k] < ans){
			ans = min(ans, pre[i] - pre[i - k]);
			idx = i - k + 1;
		}
	}
	cout << idx;
	
}
