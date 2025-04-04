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
	vector<ll> a(n + 1);
	vector<ll> pre(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
	}
	vector<ll> pile(N, 0);
	for(int i = 1; i <= n; i++){
		for(int j = pre[i - 1] + 1; j <= pre[i]; j++){
			pile[j] = i;
		}
	}
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		cout << pile[x] << endl;
	}
}
