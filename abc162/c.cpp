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

int cache[220][220];

int cache_gcd(int a, int b)
{
  if(cache[a][b] != 0) {
    return cache[a][b];
  } else {
    int tmp = gcd(a,b);
    cache[a][b] = tmp;
    cache[b][a] = tmp;
    return tmp;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  int ans = 0;
  repp(a,N) {
    repp(b,N) {
      repp(c,N) {
        int tmp = gcd(a,b);
        ans += gcd(tmp, c);
      }
    }
  }
  cout << ans << endl;
}

