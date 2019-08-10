#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

ull ncr(ull n, ull r) {
  ull m = 1, p = 1;
  rep(i,r) m = m * (n-i);
  rep(i,r) p = p * (i+1);
  return m/p;
}

int main() {
  int N; cin >> N;
  vector<string> S(N);
  rep(i,N){
    cin >> S[i];
    sort(S[i].begin(), S[i].end());
  }
  sort(S.begin(), S.end());
  ull ans = 0, tmp = 1;
  string cmp = S[0];
  for(int i=1; i<N; ++i) {
    if(cmp == S[i]) {
      ++tmp;
    } else {
      if(tmp > 1)
        ans += ncr(tmp,2);
      tmp = 1;
      cmp = S[i];
    }
  }
  if(tmp > 1)
    ans += ncr(tmp,2);
  cout << ans << endl;
}

