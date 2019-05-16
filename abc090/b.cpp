#include <iostream>
using namespace std;

bool palindrome(int i)
{
  string str = to_string(i);
  int len = str.length();
  for(int i=0; i<len/2; ++i)
  {
    if(str[i] != str[len-1-i])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int A, B, ans=0;
  cin >> A >> B;

  for(int i=A; i<=B; ++i)
  {
    if(palindrome(i))
      ans++;
  }
  cout << ans << endl;
  return 0;
}
