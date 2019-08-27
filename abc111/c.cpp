#include <bits/stdc++.h>
#define INF LLONG_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(int i=0; i<n; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

typedef struct {
  int idx;
  int cnt;
} E;
E a_no1, a_no2, b_no1, b_no2;

int main() {
  int n; cin >> n;
  vector<int> mem1(100001,0), mem2(100001, 0);
  rep(i, n) {
    int v; cin >> v;
    if(i%2) ++mem1[v];
    else ++mem2[v];
  }
  rep(i, 100001) {
    if(mem1[i] > a_no1.cnt) {
      a_no2.idx = a_no1.idx;
      a_no2.cnt = a_no1.cnt;
      a_no1.idx = i;
      a_no1.cnt = mem1[i];
    } else if(mem1[i] > a_no2.cnt) {
      a_no2.idx = i;
      a_no2.cnt = mem1[i];
    }
    if(mem2[i] > b_no1.cnt) {
      b_no2.idx = b_no1.idx;
      b_no2.cnt = b_no1.cnt;
      b_no1.idx = i;
      b_no1.cnt = mem2[i];
    } else if(mem2[i] > b_no2.cnt) {
      b_no2.idx - i;
      b_no2.cnt = mem2[i];
    }
  }
  if(a_no1.cnt == b_no1.cnt && a_no1.idx == b_no1.idx)
    cout << n - a_no1.cnt - max(a_no2.cnt, b_no2.cnt) << endl;
  else
    cout << n - a_no1.cnt - b_no1.cnt << endl;
}

