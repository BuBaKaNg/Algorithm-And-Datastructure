#include<bits/stdc++.h>
#define ll long long
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n' // Tránh flush buffer không c?n thi?t
using namespace std;
const ll N = 1e6 + 5;
const ll md = 1e9;
const long long INF = 2000000000000000000LL;

struct room {
	ll s, e;
	ll in;
};

int main(){
	ios_fast();
	int n; cin >> n;
	vector<room> rooms;
	for(int i = 0; i < n; i++) {
		ll x, y; cin >> x >> y;
		room r = {x, y, i};
		rooms.push_back(r);
	}
	priority_queue<pair<ll,ll>> pq;
	sort(rooms.begin(), rooms.end(), [](room& a, room& b){
		if(a.s == b.s) return a.e < b.e;
		return a.s < b.s;
	});
	ll lastRoom = 0;
	ll min_rooms = 0;
	vector<ll> b(n);
	for(int i = 0; i < n; i++){
		if(pq.empty()){
			lastRoom++;
			pq.push({-rooms[i].e, lastRoom});
			b[rooms[i].in] = lastRoom;
		}
		else{
			pair<ll,ll> v = pq.top();
			if(-v.first < rooms[i].s){
				pq.pop();
				pq.push({-rooms[i].e, v.second});
				b[rooms[i].in] = v.second;		
			}
			else{
				lastRoom++;
				pq.push({-rooms[i].e, lastRoom});
				b[rooms[i].in] = lastRoom;
			}
		}
		min_rooms = max(b[rooms[i].in], min_rooms);
	}
	cout << min_rooms << endl;
	for(auto x : b){
		cout << x << " ";
	}
	
}
	
