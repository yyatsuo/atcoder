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

vector<ll> A;
vector<ll> B;
int N, M;
ll K;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> N >> M >> K;
  A.resize(N);
  B.resize(M);
  rep(i,N) cin >> A[i];
  rep(i,M) cin >> B[i];

  // read all A
  int an = 0;
  ll k = 0;
  for(int n=0; n<N; ++n) {
    k += A[n]; ++an;
    if(k >= K) break;
  }
}

