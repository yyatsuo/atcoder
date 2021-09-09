#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  vector<pair<int,int>> A, B;
  for(int i=0; i<N; ++i) {
    int a, b;
    cin >> a >> b;
    A.push_back(make_pair(a,i));
    B.push_back(make_pair(b,i));
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  if(A[0].second != B[0].second) {
    cout << max(A[0].first, B[0].first) <<endl;
  }
  else
  {
    cout << min(A[0].first + B[0].first, min(
                max(A[0].first, B[1].first),
                max(A[1].first, B[0].first))) << endl;
  }
}

