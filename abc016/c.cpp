#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
using namespace std;

typedef struct {
  vector<int> neighbour;
}Node;

Node user[15];

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, M; cin >> N >> M;
  FOR(i, 1, M+1) {
    int A, B; cin >> A >> B;
    user[A].neighbour.push_back(B);
    user[B].neighbour.push_back(A);
  }
  FOR(i, 1, N+1) {
    int ans = 0;
    vector<int> ff;
    for(int j:user[i].neighbour){
      for(int k:user[j].neighbour) {
        auto ret = find(user[i].neighbour.begin(), user[i].neighbour.end(), k);
        if(ret == user[i].neighbour.end() && k!=i) ff.push_back(k);
      }
    }
    sort(ff.begin(), ff.end());
    ff.erase(unique(ff.begin(), ff.end()), ff.end());
    cout << ff.size() << endl;
  }
}

