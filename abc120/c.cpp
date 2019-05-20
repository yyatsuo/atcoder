#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;
  vector<int> ans(2, 0);
  for(char c:S)
  {
    if(c-'0') ++ans[0];
    else ++ans[1];
  }
  cout << 2*min(ans[0],ans[1]) << endl;
  return 0;
}
