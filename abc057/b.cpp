#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> a(N), b(N), c(M), d(M);
  rep(i, N) cin >> a[i] >> b[i];
  rep(i, M) cin >> c[i] >> d[i];

  vector<pair<int,int>> ans(N, make_pair(INT_MAX, INT_MAX));
  for(int i=0; i<N; ++i) {
    for(int j=0; j<M; ++j) {
      int distance = abs(a[i]-c[j])+abs(b[i]-d[j]);
      if(distance < ans[i].first) {
        ans[i].first = distance;
        ans[i].second = j;
      }
      else if(distance == ans[i].first) {
        ans[i].second = min(ans[i].second, j);
      }
    }
  }
  rep(i, N) cout << ans[i].second+1 << endl;
  return 0;
}
