#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int N, M;
  int L_max = INT_MAX;
  int R_min = 0;
  cin >> N >> M;
  vector<int> arr(N+1, 0);
  rep(i, M)
  {
    int L,R;
    cin >> L >> R;
    L_max = max(L_max, L);
    R_min = min(R_min, R);
  }
  printf("%d\n", (R_min-L_max)<0?0:R_min-L_max);
  return 0;
}
