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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  double A, B, H, M;
  cin >> A >> B >> H >> M;
  double degH = (360.0/12.0 * H) + (360.0/12.0/60.0 * M);
  double degM = 360.0/60.0 * M;
  double degA = max(degH, degM) - min(degH, degM);
  //if(degA > 180) degA = 360-degA;
  double ans_2 = A*A + B*B - 2*A*B*cos(degA * M_PI / 180.0);
  printf("%.20f\n", sqrt(ans_2));
}

