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
  ll n; cin >> n;
  vector<ll> a(n);
  ll o=0, p=0;
  rep(i, n) {
    cin >> a[i];
    if(a[i] > o) o = a[i];
  }
  ll d1, d2;
  d1 = o/2;
  if(o%2) d2 = o/2+1;
  else d2 = o/2;
  for(auto i:a) {
    if(abs(d1-i) < abs(d1-p)) p=i;
    if(abs(d2-i) < abs(d2-p)) p=i;
  }
  cout << o << " " << p << endl;
}

