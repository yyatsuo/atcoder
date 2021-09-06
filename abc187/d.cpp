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
  ll N; cin >> N;
  ll Asum = 0;
  vector<tuple<ll,ll,ll>> arr;
  rep(i, N) {
    ll A, B; cin >> A >> B;
    ll sum = A+B;
    ll diff = sum + A;
    arr.push_back(make_tuple(diff, A, B));
    Asum += A;
  }
  sort(arr.begin(), arr.end(), greater<tuple<ll,ll,ll>>());

  ll ans = 0;
  ll T = 0;
  for( auto a:arr ) {
    ++ans;
    T += get<1>(a) + get<2>(a);
    Asum -= get<1>(a);
    if(Asum < T) {
      cout << ans << endl;
      return 0;
    }
  }
}

