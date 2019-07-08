#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  string O, E;
  cin >> O >> E;
  for(int i=0; i<O.length(); ++i) {
    cout << O[i];
    if(i<E.length()) {
      cout << E[i];
    }
  }
  cout << endl;
  return 0;
}
