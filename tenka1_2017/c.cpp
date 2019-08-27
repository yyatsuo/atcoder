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
  int N; cin >> N;
  if(N%2) {
    if(N==3) {
      printf("2 2 3\n");
    } else {
      for(int A=1; A<=3500; ++A) {
        for(int B=1; B<=3500; ++B) {
          float C = (float)(N*A*B)/(float)(4*A*B - N*B - N*A);
          if(floor(C) == C && (int)C>0) {
            printf("%d %d %d\n", A, B, int(C));
            return 0;
          }
        }
      }
    }
  } else printf("%d %d %d\n", N, N, N/2);
}

