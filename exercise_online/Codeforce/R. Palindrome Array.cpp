#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int a[N];
int n;
bool solve(int i){
	if(i == n / 2 + 1) return true;
	if(a[i] == a[n - 1 - i]){
		if(solve(i + 1)) return true;
	}
	else{
		return false;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	if(solve(0)) cout << "YES";
	else cout << "NO";
}
