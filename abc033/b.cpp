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
  int sum = 0, max = 0; string str;
  rep(i, N) {
    string S; int P;
    cin >> S >> P;
    sum += P;
    if(max < P) {
      max = P;
      str = S;
    }
  }
  if(max*2 > sum) cout << str << endl;
  else cout << "atcoder" << endl;
}

