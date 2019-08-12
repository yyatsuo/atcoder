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
  int N, K; cin >> N >> K;
  vector<int> R(N); rep(i,N) cin >> R[i];
  sort(R.begin(), R.end(), greater<int>());
  float ans = 0;
  for(int i=K-1; i>=0; --i) ans = (ans+R[i])*0.5;
  printf("%.06f\n",ans);
}

