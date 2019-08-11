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
  int N; cin >> N;
  vector<ll> H(N);
  rep(i, N) cin >> H[i];

  if(N==1) {
    cout << "Yes" << endl;
    return 0;
  }
  rep(i, N-1) {
    if(H[i] < H[i+1]) H[i+1]--;
  }
  rep(i, N-1) {
    if(H[i] <= H[i+1]){
      continue;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

