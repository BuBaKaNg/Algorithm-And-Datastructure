#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

ll n, t;

bool solve(ll i){
	if(i > n) return false;
	if(i == n) return true;
	return solve(i*10) || solve(i*20);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while(t--){
		cin >> n;
		if(solve(1)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}

