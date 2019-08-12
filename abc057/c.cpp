#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  ll N; cin >> N;
  ll ans = INF;
  for(ll i=1; i <= sqrt(N); ++i) {
    if(N%i == 0){
      int A = to_string(i).size(), B = to_string(N/i).size();
      if(ans > max(A,B)) ans = max(A,B);
    }
  }
  cout << ans << endl;
}
