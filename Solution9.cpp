#include<iostream>
using namespace std;
#define ll long long

int main() 
{
  int a[500] = {0};
  for (int i=3;i<=500;i+=2)
  {
    a[i] = 1;
  }
  for (int i=3;i<=500;i+=2)
  {
      if (a[i]==1)
      {
          for (int j=i*i;j<=500;j+=i)
          {
            a[j] = 0;
          }
      }
  }
  a[0]=a[1]=0;
  a[2]=1;

  for (int i=1;i<500; i++)
  {
    if (a[i] > 0) 
    {
      cout << i << endl;
    }
  }
  return 0;
}
