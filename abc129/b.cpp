#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int N; cin >> N;
  vector<int> W(N);
  rep(i, N) cin >> W[i];

  int ans = INT_MAX;
  rep(T, N) {
    int s1=0, s2=0;
    for(int i=0; i<T; ++i)
      s1 += W[i];
    for(int i=T; i<N; ++i)
      s2 += W[i];
    if(abs(s1 - s2) < ans)
      ans = abs(s1-s2);
  }
  cout << ans << endl;
  return 0;
}
