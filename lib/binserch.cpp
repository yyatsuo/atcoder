#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int key = 500;
bool solve(int mid) {
  return mid >= key;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int ok = 1000;
  int ng = -1;
  while(abs(ok-ng) > 1)
  {
    int mid = (ok + ng) / 2;
    if(solve(mid)) ok = mid;
    else ng = mid;
  }
  cout << ok << " " << ng << endl;
}

