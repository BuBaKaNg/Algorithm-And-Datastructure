#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

int n;
int a[N];

void solve(int n){
	if(n < 0) return;
	if(!(n&1)){
		cout << a[n] << " ";
		solve(n - 2);
	}
	else solve(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	solve(n - 1);
}
