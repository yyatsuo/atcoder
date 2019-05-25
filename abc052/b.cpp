#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int N, max=0, x=0;
  string S;
  cin >> N >> S;
  for(char c:S)
  {
    if(c == 'I')
    {
      x++;
      if(max < x) max = x;
    }
    else if(c == 'D')
    {
      x--;
    }
  }
  cout << max << endl;
  return 0;
}
