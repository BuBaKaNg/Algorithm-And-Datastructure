#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

void solve(int i, int n){
	if(i == n + 1) return;
	cout << i << endl;
	solve(i + 1, n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	solve(1, n);
}
