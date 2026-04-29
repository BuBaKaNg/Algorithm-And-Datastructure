#include <bits/stdc++.h>
#define ios_fast() ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
using namespace std;
const int maxX = 1e6;

int N, x, d[maxX+1];

void init(){
    for(int i = 1; i <= maxX; i++)
        for(int j = i; j <= maxX; j += i)
            d[j]++;
}

int main(){
	ios_fast();
    scanf("%d", &N);

    init();
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        printf("%d\n", d[x]);
    }
}