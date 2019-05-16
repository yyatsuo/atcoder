#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int R, G, B, N, ans=0;
  cin >> R >> G >> B >> N;

  for(int r=0; r<=N; r+=R)
  {
    for(int g=0; r+g<=N; g+=G)
    {
      int rem = N-r-g;
      if(rem%B == 0)
      {
        ++ans;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
