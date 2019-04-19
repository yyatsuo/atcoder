#include <iostream>
#include <vector>

using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> H(N);

  for(int i=0; i<N; ++i)
  {
    cin >> H[i];
  }

  int max=0;
  int ans=0;
  for(auto h:H)
  {
    if(h>=max)
    {
      max = h;
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}

