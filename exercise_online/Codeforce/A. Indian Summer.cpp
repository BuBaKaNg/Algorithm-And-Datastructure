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
	set<pair<string,string>> se;
	int n; cin >> n;
	while(n--){
		string s; cin >> s;
		string t; cin >> t;
		se.insert({s, t});
	}
	cout << se.size() << endl;
	
}
