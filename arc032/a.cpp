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

bool isPrime(int N) {
  if(N == 1) return false;
  if(N == 2) return true;
  if(N%2 == 0) return false;
  for(int i=3; i<sqrt(N); i+=2) {
    if(N%i == 0) return false;
  }
  return true;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N; cin >> N;
  int n = 0;
  for(int i=1; i<=N; ++i) { n+=i; }
  if(isPrime(n)) cout << "WANWAN" << endl;
  else cout << "BOWWOW" << endl;
}
