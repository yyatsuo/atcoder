#include <iostream>
using namespace std;

int main()
{
  char c[3][3];
  for(int i=0; i<3; ++i)
  {
    for(int j=0; j<3; ++j)
    {
      cin >> c[i][j];
    }
  }
  for(int i=0; i<3; ++i)
    cout << c[i][i];
  cout << endl;

  return 0;
}
