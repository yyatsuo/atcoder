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

typedef struct{
  vector<int> n;
} NL;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, M; cin>>N>>M;

  vector<ll> H(N+1);
  for(int i=1; i<=N; ++i) cin >>H[i];

  vector<NL> nl(N+1);

  rep(i,M) {
    int A, B;
    cin >> A >> B;
    nl[A].n.push_back(B);
    nl[B].n.push_back(A);
  }

  int ans = 0;
  for(int i=1; i<=N; ++i) {
    bool isGood = true;
    for(int n:nl[i].n) {
      if(H[n] >= H[i]) {
        isGood = false;
      }
    }
    if(isGood) ++ans;
  }
  cout << ans << endl;
}

