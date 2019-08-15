#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
  double N, T, A, ans=0;
  double tdiff=INT_MAX;
  cin >> N >> T >> A;
  for(int n=1; n<=N; ++n)
  {
    double H;
    cin >> H;
    if(abs(A-(T-H*0.006))<tdiff)
    {
      tdiff = (double)abs(A-(T-H*0.006));
      ans = n;
    }
  }
  cout << ans << endl;
  return 0;
}

