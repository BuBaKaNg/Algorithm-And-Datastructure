#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

ll solve(ll S, ll E){
	if(E == S) return 1;
	if(E < S) return 0;
	return solve(S, E - 1) + solve(S, E - 2) + solve(S, E - 3);	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll S, E; cin >> S >> E;
	ll ans = solve(S, E);
	cout << ans << endl;
}
