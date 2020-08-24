#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; ll K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i,N) cin >> A[i];

  vector<int> v;
  vector<int> step(N, 0);
  int cnt = 2;
  step[0] = 1;
  v.push_back(1);
  int cur = 1, ans = 1, loop = 0;
  while(K > 0) {
    ans = A[cur-1];
    cur = ans;
    --K;
    if(K==0) break;
    v.push_back(cur);
    if(step[cur-1] == 0) {
      step[cur-1] = cnt;
      ++cnt;
    } else {
      loop = cnt-step[cur-1];
      K %= loop;
      ans = v[K+step[cur-1]-1];
      break;
    }
  }
  cout << ans << endl;
}

