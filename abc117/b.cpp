#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> l(N);
  for(int i=0; i<N; ++i) cin>>l[i];
  int max_idx = distance(l.begin(), max_element(l.begin(), l.end()));
  int sum=0;
  for(int i=0; i<N; ++i)
 {
   if(i != max_idx)
     sum += l[i];
 }
  printf("%s\n", l[max_idx]<sum?"Yes":"No");
  return 0;
}

