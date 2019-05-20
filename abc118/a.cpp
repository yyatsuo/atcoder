#include <iostream>
using namespace std;
 
int main()
{
  int A, B;
  cin >> A >> B;
  if(B%A)
    cout << B-A << endl;
  else
    cout << A+B << endl;
 
  return 0;
}