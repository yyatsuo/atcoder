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
  ll N, C;
  cin >> N >> C;
  vector<tuple<ll, ll, ll>> abc(N);
  rep(i,N) {
    int a, b, c;
    cin >> a >> b >> c;
    abc[i] = make_tuple(a, b, c);
  }
  sort(abc.begin(), abc.end());

  ll ans = 0, cost = 0, left = 0, right = 0;
  rep(i, abc.size()-1) {
    auto t = abc[i];
    auto t_n = abc[i+1];
    left = max(left, get<0>(t));
    right = min(right, get<1>(t));
    cost += get<2>(t);
    ans += (min(cost, C) * right-left;
  }
}
