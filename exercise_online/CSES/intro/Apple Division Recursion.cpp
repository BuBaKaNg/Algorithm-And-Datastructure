#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

ll mi = INT_MAX;
ll gr1 = 0;
ll gr2 = 0;
ll a[N];
ll n;
void solve(ll i){
	if(i == n){
		mi = min(mi, abs(gr1-gr2));
		return;	
	}
	gr1 += a[i];
	solve(i + 1);
	gr1 -= a[i];
	gr2 += a[i];
	solve(i + 1);
	gr2 -= a[i];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	solve(0);
	cout << mi << endl;
}
