#include <bits/stdc++.h>
using namespace std;

int main() {
  string S,T; cin >> S >> T;
  string l = "atcoder";
  bool win = true;
  for(int i=0; i<S.size(); ++i) {
    if(S[i]=='@' && T[i] == '@') {
      continue;
    } else if(S[i] == '@') {
      for(char c:l){
        if (T[i] == c) {
          win = true;
          break;
        }
        win = false;
      }
    } else if(T[i] == '@') {
      for(char c:l){
        if(S[i] == c){
          win = true;
          break;
        }
        win = false;
      }
    } else{
      if(S[i] != T[i]) win = false;
    }
    if(!win) break;
  }
  printf(win?"You can win\n":"You will lose\n");
}

