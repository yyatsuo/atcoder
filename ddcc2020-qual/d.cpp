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
  ll M; cin >> M;
  string N;
  rep(i, M) {
    char d; int c;
    cin >> d >> c;
    rep(i,c) { N.push_back(d); }
  }
  rep(i, N.length()-1) {
    int tmp = N[0]-'0' + N[1]-'0';
    cout << N[i] << "+" << N[1] << "=" << tmp << endl;
    N.erase(N.begin());
  }
  cout << N << endl;
}

