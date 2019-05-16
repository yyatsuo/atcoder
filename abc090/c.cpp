#include <iostream>
#include <vector>
using namespace std;
int main()
{
  long long int N, M;
  cin >> N >> M;
  if(N < 2 && M < 2)
    cout << 1 << endl;
  else if(N < 2)
    cout << M-2 << endl;
  else if(M < 2)
    cout << N-2 << endl;
  else
    cout << (M-2)*(N-2) << endl;

  return 0;
}
