#include<bits/stdc++.h>
#define ll long long
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n' // Tránh flush buffer không c?n thi?t
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

vector<ll > d(N);
bool check[N];

int main(){
	ios_fast();
	ll t; cin >> t;
	
	while(t--){
		memset(check, 0, sizeof(check));
		ll ans = 0;
		ll n; cin >> n;
		string s; cin >> s;
		s = ' ' + s;
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j+=i){
				if(s[j] == '0'){
					if(!check[j]){
						check[j] = true;
						ans += i;		
					}

				}
				else break;
			}
		}
		cout << ans << endl;
	}
}
