#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  string A, B, C;
  cin >> A >> B >> C;
  char next = 'a';
  char ans;
  for(;;) {
    if(next == 'a') {
      next = A.front();
      ans = 'A';
      if(A.length()) A.erase(0,1);
      else break;
    } else if (next == 'b') {
      next = B.front();
      ans = 'B';
      if(B.length()) B.erase(0,1);
      else break;
    } else if (next == 'c') {
      next = C.front();
      ans = 'C';
      if(C.length()) C.erase(0,1);
      else break;
    } else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
