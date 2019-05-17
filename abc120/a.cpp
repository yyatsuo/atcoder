#include <iostream>
using namespace std;
 
int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  // B 以下の A の倍数はいくつあるか？
  cout << min(C, B/A) << endl;
  return 0;
}