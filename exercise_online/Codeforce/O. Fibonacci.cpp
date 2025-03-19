#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

ll solve(ll n){
	if(n == 1) return 0;
	if(n == 2) return 1;
	return solve(n - 1) + solve(n - 2); 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	cout << solve(n);
}
