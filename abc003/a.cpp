#include <iostream>
using namespace std;

int main()
{
  int N;
  double ans=0;
  cin >> N;
  for(int x=1; x<=N; ++x)
    ans += x*10000;
  cout << ans/N << endl;
  return 0;
}

