#include<iostream>
#include<math.h>
using namespace std;

int sphereVol(int r)
{
    return ((4.00/3.00)*3.14159*pow(r,3));
}

int main()
{   
    int radius; 
    cout<<"radius of sphere " ;
    cin>>radius;
    int volume = sphereVol(r);
    cout<<"Vol.of sphere: "<<vol<<endl;
}
