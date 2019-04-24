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
    int add = 0;
    for(int i=0; i<S.length(); ++i) {
      if( i & bit ) {
        cout << '+';
      }
      cout << S[i];
    }
    cout << endl;
  }
  cout << ans ;
  return 0;
}
