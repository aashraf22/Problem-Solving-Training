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
int a[2000], ans[2000], cnt;
int main()
{
  init();
  int n;
  cin>>n;
  for(int i=2; i<=n; ++i)
  {
    if(!a[i])
    {
      for(int j = 2*i; j<=n; j+=i) a[j]++;
    }
  }
  for(int i=2; i<=n; ++i) if(a[i]<2) ans[cnt++] = i;
  cout<<cnt<<Endl;
  for(int i=0; i<cnt; ++i) cout<<ans[i]<<" ";
  cout<<Endl;
  //system("PAUSE");
  return 0;
}
