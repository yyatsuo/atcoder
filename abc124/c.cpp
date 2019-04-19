#include <iostream>
#include <vector>
using namespace std;
int main()
{
  string S;
  cin >> S;
  vector<char> S_odd;
  vector<char> S_even;
  for(int i=0; i<S.length(); ++i)
  {
    if(i%2)
      S_even.push_back(S[i]);
    else
      S_odd.push_back(S[i]);
  }

  int even_0=0;
  int even_1=0;
  int odd_0 =0;
  int odd_1 =0;
  for(char c : S_even)
  {
    if(c == '0')
      ++even_0;
    else
      ++even_1;
  }
  for(char c : S_odd)
  {
    if(c == '0')
      ++odd_0;
    else
      ++odd_1;
  }
  int cnt1 = even_0 + odd_1;
  int cnt2 = even_1 + odd_0;
  cout << (cnt1<cnt2?cnt1:cnt2) << endl;

  return 0;
}

