#include <bits/stdc++.h>
using namespace std;

int main() {
  string s; cin >> s;
  int size = s.size();
  bool cont = true;
  while(cont) {
    --size;
    if(size%2) --size;
    for(int i=0; i<size/2; ++i) {
      if(s[i] == s[size/2+i]) {
        cont = false;
      } else {
        cont = true;
        break;
      }
    }
  }
  cout << size << endl;
  return 0;
}

