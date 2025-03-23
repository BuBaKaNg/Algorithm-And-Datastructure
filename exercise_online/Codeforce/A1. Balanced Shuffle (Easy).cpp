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
	string s; cin >> s;
	vector<tuple<int, int , char>> ans;
	ll t1, t2;
	t1 = t2 = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			ans.push_back({t1 - t2, i + 1, s[i]});
			t1++;
		}
		else{
			ans.push_back({t1 - t2, i + 1, s[i]});
			t2++;
		}
	}
	sort(ans.begin(), ans.end(), [](tuple<int,int,char>& a, tuple<int,int,char>& b){
		if(get<0>(a) == get<0>(b)){
			return get<1>(a) > get<1>(b);
		}
		return get<0>(a) < get<0>(b);
	});
	for(auto x : ans){
		cout << get<2>(x);
	}
}
