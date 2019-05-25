#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  string S;
  cin >> S;
  long int start=-1, end=-1;
  for(int i=0; i<S.size(); ++i)
  {
    if(S[i] == 'A' && start<0)
      start = i;
    if(S[i] == 'Z')
      end = i;
  }
  cout << (start, end-start)+1 << endl;
  return 0;
}
