#include <iostream>
using namespace std;

int main()
{
  char N[3];
  char out[3];
  cin >> N;

  for(int i=0; i<3; i++)
  {
    if(N[i] == '1')
    {
      N[i] = '9';
    }
    else if(N[i] == '9')
    {
      N[i] = '1';
    }
  }
  cout << N << endl;

  return 0;
}

