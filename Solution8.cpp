#include <iostream>
using namespace std;

int main()
{
    cout << "Pythagorean triple less than 500 are => \n";
    for (int i = 1; i < 500; i++)
    {
        for (int j = 1; j < 500; j++)
        {
            for (int k = 1; k < 500; k++)
            {
                int s1 = i * i;
                int s2 = j * j;
                int s3 = k * k;
                int temp = s2 + s3;
                if (s1 == temp)
                {
                    cout << i << ":" << j << ":" << k << "\n";
                }
            }}}
}
