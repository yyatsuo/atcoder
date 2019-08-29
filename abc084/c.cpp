#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  vector<int> C(N), S(N), F(N);
  rep(i, N-1) cin >> C[i] >> S[i] >> F[i];
  vector<int> ans(N);
  rep(i, N) {
    int t = 0;
    for(int j=i; j<N-1; ++j) {
      int k = max(0.0, ceil((double)(t-S[j])/F[j]));
      t = S[j] + k*F[j];
      t += C[j];
    }
    cout << t << endl;
  }
}

