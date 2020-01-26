#include <bits/stdc++.h>
#define INF INT_MAX
#define ll  long long
#define ull unsigned long long
#define rep(i,n) for(ll i=0; i<n; ++i)
#define FOR(i, s, e) for(ll i=s; i<e; ++i)
#define MOD 1000000007
using namespace std;
using Map = vector<vector<char>>;
template<class T> inline bool chmin(T& a, T b) { if(a>b) {a=b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) { if(a<b) {a=b; return true;} return false;}

int dx[] = {0, -1, 0, 1};
int dy[] = {1, 0, -1, 0};
int H, W;

int bfs(Map& maze, int h, int w) {
  int ret = 0;
  queue<int> quex, quey, max;
  quex.push(w); quey.push(h);
  maze[h][w] = '*';
  max.push(0);
  while(!quex.empty()) {
    int x = quex.front();
    int y = quey.front();
    int n = max.front();
    chmax(ret, n);
    quex.pop(); quey.pop(); max.pop();
    rep(i,4) {
      if(0<=x+dx[i] && x+dx[i]<W && 0<=y+dy[i] && y+dy[i]<H && maze[y+dy[i]][x+dx[i]]=='.') {
        maze[y+dy[i]][x+dx[i]]= '*';
        quex.push(x+dx[i]);
        quey.push(y+dy[i]);
        max.push(n+1);
      }
    }
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cin >> H >> W;
  Map S(H, vector<char>(W));
  rep(h,H) { rep(w,W) { cin >> S[h][w]; } }

  int ans = 0;
  rep(h,H) {
    rep(w,W) {
      Map maze = S;
      if(S[h][w] == '.') {chmax(ans, bfs(maze, h, w));}
    }
  }
  cout << ans << endl;
}

