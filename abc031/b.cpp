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
  int L, H, N;
  cin >> L >> H >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  for(int a:A) {
    if(L<=a && a<=H) {
      cout << 0 << endl;
    } else if(H<a) {
      cout << -1 << endl;
    } else {
      cout << L-a << endl;
    }
  }
}

