#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

void solve(int n){
	if(n == 0) return;
	cout << "I love Recursion" << endl;
	solve(n - 1);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	solve(n);
}
