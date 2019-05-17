#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int A, B, K;
  cin >> A >> B >> K;

  int k=0;
  for(int i=min(A,B); i>=1; --i)
  {
    if(A%i==0 && B%i==0)
    {
      ++k;
      if(k==K)
      {
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}
