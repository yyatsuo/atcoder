#include <bits/stdc++.h>
#include <atcoder/all>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define YesNo(e) printf("%s\n", e ? "Yes" : "No");

using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<pair<double, double>> AB;
  AB.resize(N);

  double time = 0;
  rep(i,N) {
    double A, B;
    cin >> A >> B;
    AB[i] = make_pair(A,B);
    time += A/B;
  }
  time /= 2;
  double ans = 0;
  for(auto& p : AB) {
    double A = p.first;
    double B = p.second;
    double t = A/B;
    if(t < time) {
      time -= t;
      ans += A;
    } else {
      ans += B*time;
      break;
    }
  }
  printf("%.10f\n", ans);
}

