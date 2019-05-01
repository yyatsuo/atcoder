#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<long long> A(N);
  for(int i=0; i<N; ++i)
  {
    cin >> A[i];
  }
  bool flg = N%2;
  int  neg = 0;
  for(int i=0; i<N; ++i)
  {
    if(A[i]<0){
      ++neg;
      A[i] = -1*A[i];
    }
  }
  unsigned long long ans = accumulate(A.begin(), A.end(), 0LL);
  if(flg && neg%2 || !flg && !(neg%2))
  {
    long long sub = *min_element(A.begin(), A.end());
    ans -= sub*2;
  }
  cout << ans << endl;
  return 0;
}
