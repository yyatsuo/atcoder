#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int w, h, x, y;
  int t = 0;
  cin >> w >> h >> x >> y;
  if(x == w/2 && y == h/2) t=1;
  float a = (float)w*(float)h/2;

  printf("%f %d\n", a, t);
  return 0;
}
