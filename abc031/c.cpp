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
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int ans = 0;
  rep(i, N) {
    int amax = 0;
    rep(j, N) {
      vector<int> a;
      for(int k=min(i,j); k<=max(i,j); ++k) a.push_back(A[k]);
      int aoki=0, takahashi=0;
      for(int n=0; n<a.size(); ++n) {
        if(n%2) takahashi += a[n];
        else aoki += a[n];
      }
      if(amax > aoki) {
        cout << aoki << " " << takahashi << endl;
        amax = aoki;
        chmax(ans, takahashi);
      }
    }
  }
  cout << ans << endl;
}

