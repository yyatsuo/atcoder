#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> adj[1000000];
int dst[1000000];

void dfs(int u, int prv, int w){
  dst[u] = w & 1;
  for (int i = 0, nx, l; i < adj[u].size(); i++){
    nx = adj[u][i].first, l = adj[u][i].second;
    if (nx != prv){
      dfs(nx, u, w ^ l);
    }
  }
}
int main(){
  cin >> n;
  for (int i = 1, u, v, w; i < n; i++){
    cin >> u >> v >> w;
    w &= 1;
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
  }
  dfs(1, -1, 0);
  for (int i = 1; i <= n; i++) cout << dst[i] << '\n';
  return 0;
}
