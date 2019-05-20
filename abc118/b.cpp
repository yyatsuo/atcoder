#include <iostream>
using namespace std;
static int ans_arr[30] = {0};
int main()
{
  int N, M;
  cin >> N >> M;
  for(int n=0; n<N; ++n)
  {
    int K;
    cin >> K;
    for(int i=0; i<K; ++i)
    {
      int A;
      cin >> A;
      ++ans_arr[A];
    }
  }
  int ans = 0;
  for(int i=1; i<=M; ++i)
  {
    if(ans_arr[i] == N) ++ans;
  }
  cout << ans << endl;
  return 0;
}
