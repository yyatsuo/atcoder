#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char map_copy[10][10];
const int delta[4][2] = {{-1, 0},{1, 0}, {0, 1}, {0,-1}};
void dfs(int x, int y)
{
  for(int i=0; i<4; ++i)
  {
    int nx = x+delta[i][0];
    int ny = y+delta[i][1];
    if(0<=nx && nx < 10 && 0<=ny && ny < 10)
    {
      if(map_copy[ny][nx] == 'o')
      {
        map_copy[ny][nx] = '+';
        dfs(nx,ny);
      }
    }
  }
}

bool check()
{
  for(int y=0; y<10; ++y)
  {
    for(int x=0; x<10; ++x)
    {
      if(map_copy[y][x] == 'o') return false;
    }
  }
  return true;
}

int main()
{
  char map[10][10];
  for(int y=0; y<10; ++y)
  {
    for(int x=0; x<10; ++x)
    {
      cin >> map[y][x];
    }
  }
  for(int y=0; y<10; ++y)
  {
    for(int x=0; x<10; ++x)
    {
      if(map[y][x] == 'x')
      {
        memcpy(map_copy, map, sizeof(char)*100);
        map_copy[y][x] = '+';
        dfs(x, y);
        if(check()) goto YES;
      }
    }
  }
  cout << "NO" << endl;
  return 0;

  YES:
  cout << "YES" << endl;
  return 0;
}

