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
  vector<int> h(N);
  rep(i, N) cin >> h[i];
  int l=0, ans=0;
  while(l < N) {
    if(h[l] == 0){
      ++l;
    } else {
      for(int i=l; h[i]!=0 && i<N; ++i) {
        h[i]--;
      }
      ++ans;
    }
  }
  cout << ans << endl;
}

