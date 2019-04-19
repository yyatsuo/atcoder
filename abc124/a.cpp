#include <iostream>
using namespace std;
int main()
{
  int A, B;
  int coin = 0;
  cin >> A >> B;
  for(int i=0; i<2; ++i)
  {
    if(A>B)
    {
      coin += A; A--;
    }
    else
    {
      coin += B; B--;
    }
  }
  cout << coin << endl;
  return 0;
}

