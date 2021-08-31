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

void print(const std::vector<int>& v)
{
  std::for_each(v.begin(), v.end(), [](int x) {
    std::cout << x << " ";
  });
  std::cout << std::endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N, K;
  cin >> N >> K;

  vector<vector<ll>> T(N, vector<ll>(N));

  rep(i,N) {
    rep(j,N) {
      cin >> T[i][j];
    }
  }

  vector<int> v(N-1);
  rep(i,N) v[i] = i+1;

  int ans = 0;


  do {
    int cnt = 0;

    //cout << 0 << " ";
    //print(v);

    // Check distance from 0 to v[0]
    //cout << "0 to " << v[0] << endl;
    cnt += T[0][v[0]];

    // Check distance from i to i+1
    rep(i, N-2) {
      //cout << v[i] << " to " << v[i+1] << endl;
      cnt += T[v[i]][v[i+1]];
    }

    // check distance from N-1 to 0
    //cout << v[N-2] << " to 0" << endl;
    cnt += T[v[N-2]][0];

    // check distance
    //cout << cnt << endl;
    if(cnt == K) ++ans;

  } while (next_permutation(v.begin(), v.end()));

  cout << ans << endl;
}

