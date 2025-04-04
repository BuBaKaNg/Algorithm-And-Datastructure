#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

void solve(ll n){
	if(n == 1){
		cout << 1; return;
	}
	cout << n << " ";
	if(!(n&1)) solve(n / 2);
	else solve(n*3 + 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	solve(n);
}
