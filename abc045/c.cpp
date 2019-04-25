#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
int main()
{
  string S;
  cin >> S;
  long long ans = 0;
  for(int bit=0; bit<(1<<S.length()-1); ++bit) {
    long long add = 0;
    for(int i=0; i<S.length(); ++i) {
      add = add*10 + (S[i]-'0');
      if((1<<i)&bit) {
        ans += add;
        add = 0;
      }
    }
    ans += add;
  }
  cout << ans << endl;
  return 0;
}

