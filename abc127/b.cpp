#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int r, D, x;
  cin >> r >> D >> x;

  for(int i=0; i<10; ++i)
  {
    x = r*x-D;
    cout << x << endl;
  }
  return 0;
}
