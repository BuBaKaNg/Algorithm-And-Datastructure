#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e15 + 7;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n; cin >> n;
	ll l = 0;
	ll temp = n;
	while(temp){
		l++;
		temp /= 10;
	}
	ll mi = md;
	if(l == 1) {
		cout << 47;
		return 0;
	}
	ll ma = 0;
	for(ll mask = 0; mask < 1<<11; mask++){
		ll sum = 0;
		ll bit1 = 0;
		ll bit0 = 0;
		for(ll i = 0; i < 11; i++){
			if(mask&(1<<i)){
				sum *= 10;
				sum += 7;
				bit1++;
			}
			else{
				sum *= 10;
				sum += 4;
				bit0++;
			}

			if(sum >= n && bit1 == bit0){	
			 	mi = min(mi, sum);
			}
		}
	}
	cout << mi << endl;
}
