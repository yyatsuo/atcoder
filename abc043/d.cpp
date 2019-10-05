#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
using ll = long long;
using ull = unsigned long long;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  string S; cin >> S;
  if(S.size() >= 3) {
    rep(i, S.size()-2) {
      if(S[i] == S[i+1] || S[i] == S[i+2] || S[i+1] == S[i+2]) {
        cout << i+1 << " " << i+3 << endl;
        return 0;
      }
    }
  } else {
    if(S[0] == S[1]) {
      cout << "1 2" << endl;
      return 0;
    }
  }
  cout << "-1 -1" << endl;
}

