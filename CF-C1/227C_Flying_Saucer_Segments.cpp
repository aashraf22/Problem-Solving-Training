#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <cstdio>
#define Endl "\n"
#define LL long long
#define F first
#define S second
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
LL binpow(LL a, LL n, LL m) {
    LL res = 1;
    while (n) {
        if (n & 1) res *= a;
        a *=a a;
        n >>= 1;
        res %= m;
        a %= m;
    }
    return res;
}

LL n, m;

int main() {
  //Towers of Hanoi!!!
    cin >> n >> m;
    LL ans = binpow(3LL, n, m);
    ans--;
    if (ans < 0) ans += m;
    cout << ans;
    return 0;
}
