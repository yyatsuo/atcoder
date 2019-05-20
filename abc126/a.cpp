#include <iostream>
using namespace std;
int main()
{
  int N, K;
  char S[50];
  cin >> N >> K >> S;
  S[K-1] = S[K-1]+32;
  cout << S << endl;
  return 0;
}
