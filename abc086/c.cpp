#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N; cin >> N;
  vector<int> t(N), x(N), y(N);
  rep(i,N) cin >> t[i] >> x[i] >> y[i];
  bool ans = true;
  rep(i, N) {
    int tmp = x[i]+y[i];
    if(tmp%2) {
      if(t[i]%2 && t[i] >= tmp) continue;
      ans = false;
      break;
    } else {
      if(t[i]%2 == 0 && t[i] >= tmp) continue;
      ans = false;
      break;
    }
  }
  printf("%s\n", ans?"Yes":"No");
}

