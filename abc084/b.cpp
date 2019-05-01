#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  int C[50], V[50];
  cin >> N;
  for(int i=0; i<N; ++i)
  {
    cin >> V[i];
  }
  for(int i=0; i<N; ++i)
  {
    cin >> C[i];
  }
  int ans = 0;
  for(int bit=0; bit<(1<<N); ++bit)
  {
    int x = 0, y = 0;
    for(int i=0; i<N; ++i)
    {
      if((1<<i)&bit)
      {
        x += V[i];
        y += C[i];
        if(ans < (x-y))
          ans = x-y;
      }
    }
  }
  cout << ans << endl;

  return 0;
}
