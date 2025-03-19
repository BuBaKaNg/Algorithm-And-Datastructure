#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

ll w[N];
ll v[N];
ll n, W;
ll ma = 0;
ll sum = 0;
ll C = 0;
void solve(ll i){
	if(i == n){
		ma = max(ma, sum);
		return;
	}
	solve(i + 1);
	if(C + w[i] > W) return;
	C += w[i];	
	sum += v[i];
	solve(i + 1);
	sum -= v[i];
	C -= w[i];
}
             
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> W;
	for(int i = 0; i < n; i++){
		ll x, y; cin >> x >> y;
		w[i] = x;
		v[i] = y;
	}
	solve(0);
	cout << ma << endl;
}
