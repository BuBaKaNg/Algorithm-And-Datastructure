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
	int n, m; cin >> n >> m;
	queue<pair<ll,ll>> q;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		pair<ll,ll> p = {x, i + 1};
		q.push(p);
	}
	vector<ll> ans;
	while(!q.empty()){
		if(q.front().first - m > 0){
			q.push({q.front().first - m, q.front().second});
		}
		else{
			ans.push_back(q.front().second);
		}
		q.pop();
	}
	cout << ans.back();
}
