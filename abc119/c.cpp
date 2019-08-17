#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int N,A,B,C;
vector<int> L;

/*!
 * @param a Aの総和
 * @param b Bの総和
 * @param c Cの総和
 * @return 合成コストの最小値
 */
int rec(int i, int a, int b, int c) {
  if (i==N) {
    if(!a || !b || !c) return 99999;
    return abs(a-A) + abs(b-B) + abs(c-C);
  }
  int res = rec(i+1, a, b, c);
  chmin(res, rec(i+1, a + L[i], b, c) + (a ? 10 : 0));
  chmin(res, rec(i+1, a, b + L[i], c) + (b ? 10 : 0));
  chmin(res, rec(i+1, a, b, c + L[i]) + (c ? 10 : 0));
  return res;
}

int main() {
  cin >> N >> A >> B >> C;
  L.resize(N);
  rep(i, N) cin >> L[i];
  cout << rec(0, 0, 0, 0) << endl;
}

