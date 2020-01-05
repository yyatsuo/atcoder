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
  ll N, K, R, S, P;
  string T;
  cin >> N >> K >> R >> S >> P >> T;
  ll score = 0;
  vector<char> te;
  rep(i, T.size()) {
    char c = T[i];
    char t = 'x';
    if(i>=K) t = te[i-K];
    if(c=='s' && t!='r') {
      score += R;
      te.push_back('r');
    } else if(c == 'p' && t!='s') {
      score += S;
      te.push_back('s');
    } else if(c == 'r' && t!='p') {
      score += P;
      te.push_back('p');
    } else {
      te.push_back('x');
    }
  }
  cout << score << endl;
}

