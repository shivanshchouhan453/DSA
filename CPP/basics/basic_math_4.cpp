// Armstrong Number

#include <iostream>
using namespace std;
int main()
{
    int num = 370;
    int iterNum = num;
    int sum = 0;

    while (iterNum != 0)
    {
        int rem = iterNum % 10;
        sum = sum + (rem * rem * rem);
        iterNum = iterNum / 10;
    }
    if (sum == num)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << " Not An Armstrong Number";
    }
    return 0;
}