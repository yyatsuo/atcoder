#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
using namespace std;
using ll = long long;

int main()
{
  char a,b,c,d;
  int A,B,C,D;
  scanf("%c%c%c%c",&a,&b,&c,&d);
  A = a-'0'; B = b-'0'; C = c-'0'; D = d-'0';
  // +++ 000
  if(A+B+C+D == 7) printf("%d+%d+%d+%d=7\n", A,B,C,D);
  // ++- 001
  else if(A+B+C-D == 7) printf("%d+%d+%d-%d=7\n", A,B,C,D);
  // +-+ 010
  else if(A+B-C+D == 7) printf("%d+%d-%d+%d=7\n", A,B,C,D);
  // +-- 011
  else if(A+B-C-D == 7) printf("%d+%d-%d-%d=7\n", A,B,C,D);
  // -++ 100
  else if(A-B+C+D == 7) printf("%d-%d+%d+%d=7\n", A,B,C,D);
  // -+- 101
  else if(A-B+C-D == 7) printf("%d-%d+%d-%d=7\n", A,B,C,D);
  // --+ 110
  else if(A-B-C+D == 7) printf("%d-%d-%d+%d=7\n", A,B,C,D);
  // --- 111
  else if(A-B-C-D == 7) printf("%d-%d-%d-%d=7\n", A,B,C,D);
  return 0;
}
