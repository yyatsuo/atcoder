#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
typedef pair<int, int> P;

static char field[51][51];
static char d[51][51];
int main()
{
  int R, C, sy, sx, gy, gx;
  cin >> R >> C >> sy >> sx >> gy >> gx;
  sy--; sx--; gy--; gx--;
  for(int y=0; y<R; ++y)
  {
    for(int x=0; x<C; ++x)
    {
      cin >> field[y][x];
    }
  }

  int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
  queue<P> q;
  q.push(P(sx, sy));
  d[sy][sx] = 0;
  while(q.size())
  {
    P p = q.front(); q.pop();
    cout << "pop" << p.first << p.second << endl;
    if(p.first==gx && p.second==gy)
    {
      break;
    }
    field[p.second][p.first] = '*'; // 探索済を塗り潰す

    for(int i=0; i<4; ++i)
    {
      int nx = p.first+dx[i], ny = p.second+dy[i];
      if(0 <= nx && nx < C && 0 <= ny && ny < R)
      {
        if(field[ny][nx] == '.')
        {
          cout << "push" << nx << ny << endl;
          q.push(P(nx, ny));
          d[ny][nx] = d[p.second][p.first] + 1;
        }
      }
    }
  }
  return 0;
}
