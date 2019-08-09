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
  vector<int> N(4); rep(i,4) cin >> N[i];
  vector<bool> mem(4, false);
  for(int i:N) {
    if(i==1) mem[0] = true;
    else if(i==9) mem[1] = true;
    else if(i==4) mem[2] = true;
    else if(i==7) mem[3] = true;
  }
  bool flg = true;
  for(bool b:mem) {
    if(!b) flg = false;
  }
  printf(flg?"YES":"NO");
}

