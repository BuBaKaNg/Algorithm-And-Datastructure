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
	int t; cin >> t;
	while(t--){
		ll two = 2;
		ll one = 1;
		ll five = 1;
		ll ze = 3;
		ll th = 1;
		int n; cin >> n;
		bool flag = false;
		for(int i = 0; i < n; i++){
			ll x; cin >> x;
			if(x == 1) one--;
			if(x == 2) two--;
			if(x == 3) th--;
			if(x == 5) five--;
			if(x == 0) ze--;
			if(two == 0 && one == 0 && five == 0 && ze == 0 && th == 0){
				cout << i + 1;
				flag = true;
				break;
			}
		}
		
	}
}
