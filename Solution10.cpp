#include<iostream>
#include<string.h>
using namespace std;

bool testPalin(string isPalin, int start , int last)
{
  if (start == last)
  {
    return true;
  }

  if ( isPalin[start] != isPalin[last])
  {
    return false;
  }
  if (start < last)
    testPalin(isPalin, start + 1, last - 1);

  return true;
}
int main()
{
  string isPalin;
  getline(cin, isPalin);
  int last =  isPalin.size();
  int start = 0;
  cout << testPalin(isPalin, start, last - 1);
  return 0;
}
