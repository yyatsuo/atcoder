#include <iostream>
using namespace std;
int main()
{
  int N, K, ans=0;
  string S;
  cin >> N >> K >> S;
  for (int l=0,r=0; l < N && r < N; ++l)
  {
    K += (l > 0 && (S[l]=='1') && (S[l-1]=='0'));
    while (r < N && (K || S[r]-'0'))
    {
      K -= ((S[r]=='1') && (S[r-1]=='0'));
      ++r;
    }
    ans = max(ans, r-l);
  }
  cout << ans << endl;
  return 0;
}

