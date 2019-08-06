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
  int ans = 0;
  for(int i=1; i<=N; ++i) {
    if(i <= 9) ++ans;
    else if(100 <= i && i <= 999) ++ans;
    else if(10000 <= i && i<= 99999) ++ans;
  }
  cout << ans << endl;
}

