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
  int K, X; cin >> K >> X;
  for(int i=X-K+1; i<X+K; ++i) {
    cout << i;
    if(i==X+K-1) cout << endl;
    else cout << " ";
  }
}
