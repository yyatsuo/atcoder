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
  int parent;
  vector<int> child;
  int counter;
  int add;
}node;

node tree[2*110000];
void update_counter(int root, int inc) {
  tree[root].counter += inc;
  tree[root].counter += tree[root].add;
  for(int i:tree[root].child) {
    update_counter(i, tree[root].counter);
  }
}

int main() {
  int N, Q; cin >> N >> Q;
  rep(i, N-1) {
    int a, b; cin >> a >> b;
    tree[a].child.push_back(b);
    tree[b].parent = a;
  }
  rep(i, Q) {
    int p, x; cin >> p >> x;
    tree[p].add += x;
  }
  update_counter(1, 0);
  for(int i=1; i<=N; ++i){
    cout << tree[i].counter;
    if(i == N) cout << endl;
    else cout << " ";
  }
}
