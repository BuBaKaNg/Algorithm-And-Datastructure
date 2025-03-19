#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s; getline(cin, s);
	ll ma = 0;
	ll temp = 1;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == s[i - 1]){
			temp++;
		}
		else{
			ma = max(ma, temp);
			temp = 1;
		}
	}
	ma = max(ma, temp);
	cout << ma << endl;
}
