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
	
	if(n % 2 == 0){
		cout << n / 2 << endl;
	}
	else{
		n--;
		cout << n / 2 - (n + 1) << endl;
	}
}
