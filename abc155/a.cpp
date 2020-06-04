#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0; i<n; ++i)
using namespace std;

int main() {
  int A,B,C;
  cin >> A >> B >> C;
  if( (A == B && B != C) || (A == C && C != B) || (B == C && C != A))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

