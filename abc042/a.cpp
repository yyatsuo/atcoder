#include <bits/stdc++.h>
#define INF LLONG_MAX
#define Int long long
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int main() {
  int five=0, seven=0;
  for(int i=0; i<3; ++i) {
    int n; cin >> n;
    if(n==5) ++five;
    if(n==7) ++seven;
  }
  printf((five==2&&seven==1)?"YES\n":"NO\n");
}
