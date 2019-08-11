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
  int n; cin >> n;
  vector<int> a(n); rep(i, n) cin >> a[i];
  vector<int> b;
  rep(i, n) {
    if(i%2)
      b.insert(b.begin(),a[i]);
    else
      b.push_back(a[i]);
  }
  if(n%2) for(int i=n-1; i>=0; --i) cout << b[i] << " ";
  else for(int i:b) cout << i << " ";
  cout << endl;
}
