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
	int t; cin >> t;
	while(t--){
		priority_queue<ll> p;
		int n; cin >> n;
		vector<ll> a(n);
		ll ans = 0;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++){
			if(a[i] == 0){
				if(!p.empty()){
					ans += p.top();
					p.pop();
				}
			}
			else{
				p.push(a[i]);
			}
		}
		cout << ans << endl;
	}
}
