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
  int N; cin >> N;
  vector<long double> x(N+1), y(N+1);
  for(int i=1; i<=N; ++i) cin >> x[i] >> y[i];
  vector<long double> v(N);
  iota(v.begin(), v.end(), 1);
  vector<long double> ans;
  do{
    long double distance = 0;
    rep(i, v.size()-1) {
      distance += sqrt(pow(x[v[i+1]]-x[v[i]],2) + pow(y[v[i+1]]-y[v[i]], 2));
    }
    ans.push_back(distance);
  } while(next_permutation(v.begin(), v.end()));
  long double ret = accumulate(ans.begin(), ans.end(), 0.0)/ans.size();
  printf("%.10Lf\n", ret);
}

