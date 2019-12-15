#include <bits/stdc++.h>
using namespace std;

int main() {
  string K = "keyence";
  string S; cin >> S;
  int i,j;
  for(i=0; i<S.size(); ++i) {
    if(S[i] != K[i]) break;
  }
  for(j=S.size()-(K.size()-i); j<S.size(); ++j, ++i) {
    if(S[j] != K[i]) break;
  }
  printf("%s\n", i==K.size()?"YES":"NO");
}

