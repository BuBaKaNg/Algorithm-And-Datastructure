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
		vector<ll> pre(n + 1, 0);
		vector<ll> suf(n + 2, 0);
		vector<ll> a(n + 1);
		for(int i = 1; i <= n; i++){
			cin >> a[i];
			pre[i] = pre[i - 1] + a[i];
		}
		for(int i = n; i >= 1; i--){
			suf[i] = suf[i + 1] + a[i];
		}
		ll mi = md;
		ll idx = -1;
		for(int i = 1; i <= n; i++){
			if(pre[i] + suf[i] < mi){
				mi = pre[i] + suf[i];
				idx = i;
			}
		}
		cout << idx << endl;
	}
}
