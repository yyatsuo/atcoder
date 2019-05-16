#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  long long int N, ans=0;
  cin >> N;
  for(long long int i=N; i>0; --i)
  {
    if(N/i == N%i)
    {
      cout << i << endl;
    }
  }
  return 0;
}
