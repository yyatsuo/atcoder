#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  int A, B;
  cin >> A >> B;
  if(A <= 5)
    cout << 0 << endl;
  else if(A <=12)
    cout << B/2 << endl;
  else
    cout << B << endl;
  return 0;
}
