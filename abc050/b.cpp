#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N,M;
  cin >> N;
  vector<int> T(N);
  for(int i=0; i<N; ++i)
    cin >> T[i];
  cin >> M;
  vector<int> P(M);
  vector<int> X(M);
  for(int i=0; i<M; ++i)
    cin >> P[i] >> X[i];

  for(int n=0; n<M; ++n)
  {
    int ans = 0;
    for(int i=0; i<N; ++i)
    {
      if(i==P[n]-1)
        ans += X[n];
      else
        ans += T[i];
    }
    cout << ans << endl;
  }
  return 0;
}
