#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#define Endl "\n"
#define LL long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };

struct team {
  int id, m;
  team() {}
  bool operator < (team X)const{
        return m>X.m;
    }
}a[150000];
int main()
{
  init();
  int n;
  cin>>n;
  for(int i=0; i<n; ++i)
  {
    cin>>a[i].id>>a[i].m;
  }
  stable_sort(a, a+n);
  for(int i=0; i<n; ++i) cout<<a[i].id<<" "<<a[i].m<<Endl;
  //system("PAUSE");
  return 0;
}
