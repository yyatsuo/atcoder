#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0; i<N-1; i++)
  {
    cin >> A[i];
  }
  // Ai => abs|left - right|
  // no overlap
  for(int i=1; i<=N; ++i)
  {
    // fix firsr number & search
    vector<int> P(N) = {0};
    P[i] = 1;
    for(int i=0; i<N-1; ++i)
    {
    }
  }
  cout << N;
  return 0;
}
