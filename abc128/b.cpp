#include <bits/stdc++.h>
#define INF LLONG_MAX
#define Int long long
#define rep(i,n) for(int i=0; i<n; ++i)
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

typedef struct {
  string name;
  int score;
  int id;
} restaurant;

int main() {
  int N; cin >> N;
  vector<restaurant> rs(N);
  rep(i, N) { cin >> rs[i].name >> rs[i].score; rs[i].id = i+1; }
  bool sorted = false;
  while(!sorted) {
    sorted = true;
    for(int i=0; i<rs.size()-1; ++i) {
      if(rs[i].name > rs[i+1].name) {
        sorted = false;
        restaurant tmp = rs[i];
        rs[i] = rs[i+1];
        rs[i+1] = tmp;
      } else if(rs[i].name == rs[i+1].name) {
        if(rs[i].score < rs[i+1].score) {
          sorted = false;
          restaurant tmp = rs[i];
          rs[i] = rs[i+1];
          rs[i+1] = tmp;
        }
      }
    }
  }
  for(auto r:rs) cout << r.id << endl;
}

