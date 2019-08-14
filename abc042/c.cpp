#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N, K; cin >> N >> K;
  vector<char> D(K);
  rep(i, K) cin >> D[i];
  for(int n=N;;++n) {
    int cnt = 0;
    string s = to_string(n);
    for(char c:s) {
      rep(i, K) {
        if(c == D[i]) ++cnt;
      }
    }
    if(cnt == 0) {
      cout << n << endl;
      break;
    }
  }
}

