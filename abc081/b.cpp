#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); ++i)
using namespace std;
using ll = long long;

int main()
{
  int N, ans=INT_MAX;
  cin >> N;
  vector<ll> A(N);
  rep(i, N) cin >> A[i];
  for(int i:A)
  {
    int cnt=0;
    while(i%2==0)
    {
      i /= 2;
      ++cnt;
      if(cnt > ans) break;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}

