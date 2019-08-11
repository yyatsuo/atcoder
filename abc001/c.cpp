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
  int deg; float dis; cin >> deg >> dis;
  string m; int n;
  string dir[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W","WNW", "NW", "NNW"};
  deg = ((deg * 10 + 1125) / 2250) % 16;

  dis /= 60;
  int x = round(dis*10);
  if(x <= 2) n = 0;
  else if(x <= 15) n = 1;
  else if(x <= 33) n = 2;
  else if(x <= 54) n = 3;
  else if(x <= 79) n = 4;
  else if(x <= 107) n = 5;
  else if(x <= 138) n = 6;
  else if(x <= 171) n = 7;
  else if(x <= 207) n = 8;
  else if(x <= 244) n = 9;
  else if(x <= 284) n = 10;
  else if(x <= 326) n = 11;
  else n = 12;

  if(n == 0) m = "C";
  else m = dir[deg];

  printf("%s %d\n", m.c_str(), n);
}

