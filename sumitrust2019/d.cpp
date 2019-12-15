#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  string S; cin >> S;
  int ans = 0;
  rep(i,10) {
    rep(j,10) {
      rep(k,10) {
        char a[] = {'0'+i, '0'+j, '0'+k};
        int l=0;
        for(auto c:S) {
          if(c == a[l]) ++l;
          if(l==3) {
            ++ans;
            break;
          }
        }
      }
    }
  }
  cout << ans << endl;
}

