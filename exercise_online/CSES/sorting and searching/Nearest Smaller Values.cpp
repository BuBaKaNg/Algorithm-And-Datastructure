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
	stack<int> st;
	int n; cin >> n;
	vector<ll> a(n + 1);
	vector<ll> ans;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		while(!st.empty() && a[i] <= a[st.top()]){
			st.pop();
		}
		if(st.empty()) ans.push_back(0);
		else{
			ans.push_back(st.top());
		}
		st.push(i);
	}
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}
}
