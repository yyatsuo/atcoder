#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b)
{
  return b ? gcd(b, a%b) : a;
}
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N; ++i) cin >> A[i];
  int ans = 0;
  for(int i=0; i<N; ++i)
    ans = gcd(ans,A[i]);
  cout << ans << endl;
  return 0;
}
