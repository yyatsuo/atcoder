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

double expt(double n) {
  double tmp = 0;
  rep(i, n+1) tmp+=(double)i;
  return tmp/n;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, K; cin >> N >> K;
  vector<double> p(N+1,0);
  vector<int> sum(N+1,0);
  for(int i=1; i<=N; ++i) {
    cin >> p[i];
    sum[i] = sum[i-1]+p[i];
  }
  int max=0, maxIdx=0;
  for(int i=K; i<=N; ++i) {
    int tmp = sum[i]-sum[i-K];
    if(tmp > max) {
      max = tmp;
      maxIdx = i;
    }
  }
  double ans = 0;
  rep(i,K) {
    ans += expt(p[maxIdx-i]);
  }
  printf("%.10f", ans);
}

