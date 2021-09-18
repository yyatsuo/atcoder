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
  string X; cin >> X;
  map<char,char> dict;
  for(ll i=0; i<(ll)X.size(); ++i) {
    dict.insert(make_pair(X[i],'a'+i));
  }

  ll N; cin >> N;
  vector<pair<string,string>> name;

  rep(i,N) {
    string S; cin >> S;
    string Snew = "";
    for(ll j=0; j<(ll)S.size(); ++j) {
      Snew += dict.at(S[j]);
    }
    name.push_back(make_pair(Snew, S));
  }
  sort(name.begin(), name.end());
  for(auto n : name) {
    cout << n.second << endl;
  }
}
