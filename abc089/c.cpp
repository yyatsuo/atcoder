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
  int N; cin >> N;
  vector<ull> A(5, 0);
  rep(i, N) {
    string s; cin >> s;
    if(s[0] == 'M') A[0]++;
    else if(s[0] == 'A') A[1]++;
    else if(s[0] == 'R') A[2]++;
    else if(s[0] == 'C') A[3]++;
    else if(s[0] == 'H') A[4]++;
  }
  ull ans = 0;
  ans += A[0]*A[1]*A[2];
  ans += A[0]*A[1]*A[3];
  ans += A[0]*A[1]*A[4];
  ans += A[0]*A[2]*A[3];
  ans += A[0]*A[2]*A[4];
  ans += A[0]*A[3]*A[4];
  ans += A[1]*A[2]*A[3];
  ans += A[1]*A[2]*A[4];
  ans += A[1]*A[3]*A[4];
  ans += A[2]*A[3]*A[4];
  cout << ans << endl;
}

