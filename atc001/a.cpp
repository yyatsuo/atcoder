#include <iostream>
#include <cstdio>
using namespace std;
 
int H, W;
char map[500][500];
 
int delta[4][2] = {{-1, 0},{1, 0}, {0, 1}, {0,-1}};
bool dfs(int x, int y)
{
  bool ret = false;
  for(int i=0; i<4; ++i)
  {
    int nx = x+delta[i][0];
    int ny = y+delta[i][1];
    if(0<=nx && nx < W && 0<=ny && ny < H)
    {
      if(map[ny][nx] == '.')
      {
        map[ny][nx] = '=';
        ret = dfs(nx, ny);
      }
      else if(map[ny][nx] == 'g')
      {
        ret = true;
      }
      if(ret) break;
    }
  }
  return ret;
}

int main()
{
  int x, y;
  cin >> H >> W;

  for(int h=0; h<H; ++h)
  {
    for(int w=0; w<W; ++w)
    {
      cin >> map[h][w];
      if(map[h][w] == 's')
      {
        y=h;
        x=w;
      }
    }
  }
  printf("%s\n", dfs(x, y) ? "Yes" : "No");
  return 0;
}
