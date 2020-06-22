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
  ll N; cin >> N;
  vector<char> ans;
  while(N != 0) {
    ll a = N%26;
    N /= 26;
    if(a == 0) {
      ans.push_back('z');
      --N;
    }
    else ans.push_back(96+a);
  }
  for(ll i=ans.size()-1; i >= 0; --i) cout << ans[i];
  cout << endl;
}

