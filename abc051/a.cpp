#include <iostream>
using namespace std;
int main()
{
  string s;
  cin >> s;

  for(char c:s)
  {
    if(c==',')
      cout << ' ';
    else
      cout << c;
  }
  return 0;
}
