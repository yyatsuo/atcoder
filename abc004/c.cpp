#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

void swap(int P[], int a, int b) {
  int tmp=P[a];
  P[a]=P[b];
  P[b] = tmp;
}

int main() {
  int A[6] = {1,2,3,4,5,6};
  int N; cin >> N;
  N = N%30;
  rep(i,N) swap(A, i%5, i%5+1);
  for(int i:A) cout << i;
  cout << endl;
}

