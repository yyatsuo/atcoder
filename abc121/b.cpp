#include <iostream>
using namespace std;

int main()
{
  int N, M, C, ans=0;
  int B[20], A[20][20];
  cin >> N >> M >> C;
  for(int i=0; i<M; ++i) cin>>B[i];
  for(int j=0; j<N; ++j) for(int i=0; i<M; ++i) cin>>A[j][i];
  for(int j=0; j<N; ++j) {
    int sum=0;
    for(int i=0; i<M; ++i)
      sum+=A[j][i]*B[i];
    if(sum+C>0) ++ans;
  }
  cout << ans << endl;
  return 0;
}
