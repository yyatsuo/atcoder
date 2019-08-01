#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  string S; int T;
  cin >> S >> T;
  vector<int> N(5, 0);
  for(char c:S) {
    if(c=='L') { N[0]++; }
    else if(c=='R') { N[1]++; }
    else if(c=='U') { N[2]++; }
    else if(c=='D') { N[3]++; }
    else { N[4]++; }
  }
  int dist = abs(N[0]-N[1]) + abs(N[2]-N[3]);
  if(T==1) {
    dist += N[4];
  } else {
    for(int i=0; i<N[4]; ++i) {
      if( dist > 0) --dist;
      else ++dist;
    }
  }
  cout << dist << endl;
}

