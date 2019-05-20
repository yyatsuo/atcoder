#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  char S[4];
  cin >> S;
  string ans;
  int A = (S[0]-'0')*10 + S[1]-'0';
  int B = (S[2]-'0')*10 + S[3]-'0';

  if (0<A && A<=12 && 0<B && B<=12)
    ans = "AMBIGUOUS";
  else if(0 < A && A <= 12)
    ans = "MMYY";
  else if(0 < B && B <=12)
    ans = "YYMM";
  else
    ans = "NA";

  cout << ans << endl;

  return 0;
}
