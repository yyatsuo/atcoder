#include <iostream>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  printf("%s\n", (abs(a-c)<=d || (abs(b-a)<=d && abs(c-b)<=d))?"Yes":"No");
  return 0;
}

