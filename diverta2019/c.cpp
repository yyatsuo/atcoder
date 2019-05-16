#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int N;
  cin >> N;
  vector<string> s(N);
  int cnt = 0;
  int typeA = 0; // Aでおわる
  int typeB = 0; // Bではじまる
  int typeC = 0; // BではじまってAでおわる
  for(int i=0; i<N; ++i)
  {
    string s;
    cin >> s;
    for(int n=0; n<s.size()-1; ++n)
    {
      if(s.substr(n,2) == "AB")
      {
        ++cnt;
      }
    }
    if(*s.begin() == 'B' && *(s.end()-1) == 'A')
    {
      ++typeC;
    }
    else
    {
      if(*s.begin() == 'B')
      {
        ++typeB;
      }
      if(*(s.end()-1) == 'A')
      {
        ++typeA;
      }
    }
  }
  bool endA = false;
  for(int i=0;;++i)
  {
    // 先頭
    if(i==0)
    {
      if(typeA)
      {
        --typeA;
        endA = true;
      }
      else if(typeC)
      {
        --typeC;
        endA = true;
      }
      else
      {
        break;
      }
    }
    else
    {
      // typeCを先に使う
      if(typeC)
      {
        --typeC;
        ++cnt;
      }
      // typeCがなくなったら交互に
      else if(endA && typeB)
      {
        typeB--;
        ++cnt;
        endA = false;
      }
      else if(typeA)
      {
        typeA--;
        endA = true;
      }
      else
      {
        // 使える部品がなくなったら終了
        break;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}
