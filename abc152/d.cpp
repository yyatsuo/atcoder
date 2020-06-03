#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

P f(int x) {
  int a = x%10, b = 0;
  while(x) { b = x; x /= 10; }
  return P(a,b);
}

int main() {
  int N; cin >> N;
  map<P, int> mp;
  for(int i=1; i<=N; ++i) {
    P p = f(i);
    mp[p]++;
  }
  ll ans = 0;
  for(int i=1; i<=N; ++i) {
    P p = f(i);
    P q(p.second, p.first);
    ans += mp[q];
  }
  cout << ans << endl;
}

