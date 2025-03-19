#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int mask = 0; mask < (1 << n); mask++){	
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(mask & (1 << i)){
				sum += a[i];
			}
			else sum -= a[i];
		}
		if(sum % 360 == 0){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
