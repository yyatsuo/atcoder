#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int K, S;
  int ans = 0;
  cin >> K >> S;
  for(int X=0; X<=K; ++X)
  {
    for(int Y=0; Y<=(S-X) && Y<=K; ++Y)
    {
      if(S-(X+Y) <= K)
        ++ans;
    }
  }
  cout << ans << endl;
}
