#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
int main() {
  int N; cin >> N;
  int ans = 1;
  for(int i=2; ; ++i) {
    if(i*i > N) break;
    for(int j=1; ; ++j) {
      int tmp = pow(i,j);
      if(tmp > N) break;
      if( tmp > ans) ans = tmp;
    }
  }
  cout << ans << endl;
  return 0;
}

