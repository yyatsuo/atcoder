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
  vector<int> P(100010,0);
  rep(i,N) {
    int A; cin >> A;
    P[A]++;
  }
  ll sum = 0;
  rep(i,P.size()) {
    sum += i*P[i];
  }
  int Q; cin >> Q;
  vector<ll> S(Q);
  rep(i,Q) {
    int B, C; cin >> B >> C;
    sum += P[B]*(C-B);
    P[C] += P[B];
    P[B] = 0;
    S[i] = sum;
  }
  for(auto s:S) cout << s << endl;
}
