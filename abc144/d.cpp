#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
#define deg_to_rad(deg) (((deg)/360)*2*M_PI)
#define rad_to_deg(rad) (((rad)/2/M_PI)*360)
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  double a, b, x; cin >> a >> b >> x;
  double h = x/(a*a);
  if(h < b/2) {
    h = (2*x) / (a*b);
    printf("%.10f\n", 90-rad_to_deg(atan(h/b)));
  } else {
    printf("%.10f\n",rad_to_deg(atan(2*(b-h)/a)));
  }
}

