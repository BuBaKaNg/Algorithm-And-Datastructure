#include<bits/stdc++.h>
#define ll long long
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n' // Tránh flush buffer không c?n thi?t
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_fast();
	ll t; cin >> t;
	while(t--){
		ll n; cin >> n;
		char c; cin >> c;
		string s; cin >> s;
		s = ' ' + s;
		string z(n, c);
		z = ' ' + z;
		if(z == s){
			cout << 0 << endl;
		}
		else{
			bool flag = true;
			for(int x = 2; x <= n; x++){
				flag = true;
				for(int j = x; j <= n; j+= x){
					if(s[j] != c){
						flag = false;
						break;
					}
				}
				if(flag){
					cout << 1 << endl;
					cout << x << endl;
					break;
				}
			}
			if(!flag){
				cout << 2 << endl;
				cout << n << " " << n - 1 << endl;
			}
		}
	}
}
