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
  vector<ll> A(N), B(N);
  map<ll, bool> m;
  rep(i,N){
    cin >> A[i];
    M[i] = A[i];
  }
  sort(M.begin(), M.end());
  erase(unique(M.begin(), M.end()), M.end());
  rep(i,N) cin >> B[i];

  ll cnt = 0;
  for(ll i=0; i<N; ++i) {
    if(A[i] < B[i]) goto Yes;
    if(A[i] == B[i]) continue;
    else {
      ++cnt;
    }
  }

Yes:
  cout << "Yes" << endl;
}

