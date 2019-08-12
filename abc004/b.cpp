#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;

int main() {
  char c[4][4];
  rep(i,4) {
    rep(j,4) {
      cin >> c[i][j];
    }
  }
  for(int i=3; i>=0; i--) {
    for(int j=3; j>=0; j--) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
}

