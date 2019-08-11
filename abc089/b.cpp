#include <bits/stdc++.h>
#define INF LLONG_MAX
#define Int long long
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int N; cin >> N;
  vector<char> A(N);
  rep(i,N) cin >> A[i];

  vector<int> mem(4, 0);
  rep(i,N) {
    if(A[i] == 'G') ++mem[0];
    else if(A[i] == 'W') ++mem[1];
    else if(A[i] == 'Y') ++mem[2];
    else if(A[i] == 'P') ++mem[3];
  }
  int ans = 0;
  rep(i,4){
    if(mem[i]) ++ans;
  }
  printf(ans==4?"Four\n":"Three\n");
}

