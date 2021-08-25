#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define repp(i,n) for(ll i=1; i<=n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}
int gcd(int x, int y) { if(x % y == 0) { return y; } else { return gcd(y, x % y); } }

struct Town {
  vector<int> neighbour;
  bool mark;
  bool isVisited;
};

void distance(vector<Town> &towns, int cur) {
  // Mark Current as Visited
  towns[cur].isVisited = true;

  // Check neighbours
  for(int n:towns[cur].neighbour) {
    // Skip if visited
    if(towns[n].isVisited) {
      continue;
    }
    // Mark the city
    towns[n].mark = !(towns[cur].mark);
    // Check neighbour
    distance(towns, n);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, Q;
  cin >> N >> Q;
  vector<Town> towns(N+1);

  rep(i,N-1) {
    int a, b;
    cin >> a >> b;
    towns[a].neighbour.push_back(b);
    towns[b].neighbour.push_back(a);
  }

  distance(towns, 1);

  rep(i, Q) {
    int c, d;
    cin >> c >> d;
    if(towns[c].mark == towns[d].mark)
      cout << "Town" << endl;
    else
      cout << "Road" << endl;
  }
}

