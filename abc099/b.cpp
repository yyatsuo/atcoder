#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int a, b, n=0; cin >> a >> b;
  for(int i=1; i<=b-a; ++i) {
    n += i;
  }
  cout << n-b << endl;
}
