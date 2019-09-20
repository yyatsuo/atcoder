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
  int N; cin >> N;
  int sum = 0;
  int sub = 1111;
  rep(i, N) {
    int s; cin >> s;
    sum += s;
    if(s%10 != 0 && s < sub) sub = s;
  }
  if(sum%10 == 0) {
    if(sub == 1111) sum = 0;
    else sum -= sub;
  }
  cout << sum << endl;
}

