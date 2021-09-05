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

int bin_search(const vector<pair<ll,ll>> &K, ll x)
{
  //cout << "bin search look for " << x << endl;
  ll l = 0;
  ll r = K.size();
  while ( r >= 0 ) {
    ll mid = l + (r-l)/2 + (r-l)%2;
    if(r-l == 1) return 0;
    //cout << "l:" << l << " r:" << r << " mid:" << mid << endl;
    if( K[mid].first <= x && x <= K[mid].second ) {
      //cout << "Bin search end " << mid << endl;
      return mid;
    } else if ( x < K[mid].first ) {
      r = mid;
    } else {
      l = mid;
    }
  }
  //cout << "Error" << endl;
  return -1;
}
void print(const vector<pair<ll,ll>> &K) {
  for(auto&& p:K) cout << "("<<p.first<<","<<p.second<<")"<<" ";
  cout << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  vector<pair<ll,ll>> K;
  ll L; cin >> L;
  K.push_back(make_pair(0,L));
  //print(K);
  ll Q; cin >> Q;

  rep(i,Q) {
    int c; cin >> c;
    ll x; cin >> x;
    ll idx = bin_search(K, x);
    if(c == 1) {
      auto p = K[idx];
      K.erase(K.begin()+idx);
      //cout << p.first << " " << p.second << " " << x << endl;
      K.push_back(make_pair(p.first,x));
      K.push_back(make_pair(x,p.second));
      sort(K.begin(),K.end());
      //print(K);
    }
    if(c == 2) {
      cout << K[idx].second - K[idx].first << endl;
    }
  }
}

