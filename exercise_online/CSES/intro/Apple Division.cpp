#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	ll a[n];
	ll mi = INT_MAX;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int mask = 0; mask < (1 << n); mask++){
		ll gr1 = 0;
		ll gr2 = 0;
		for(int i = 0; i < n; i++){
			if(mask&(1<<i)){
				gr1 += 	a[i];
			}
			else gr2 += a[i];
		}
		mi = min(mi, abs(gr1-gr2));
	}
	cout << mi << endl;
}
