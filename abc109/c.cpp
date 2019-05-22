#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b) { return b?gcd(b, a%b):a; }

int main()
{
  int N, X, x, ans=0;
  cin >> N >> X;
  for(int n=0; n<N; ++n)
  {
    cin >> x;
    x = X-x;
    ans = gcd(ans, x);
  }
  cout << abs(ans) << endl;
  return 0;
}
