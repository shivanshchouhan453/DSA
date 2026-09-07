// Prime Number

#include <iostream>
using namespace std;

bool checkPrimeNum(int);
int main()
{

    int num = 4;

    bool ans = checkPrimeNum(num);

    if (ans)
    {
        cout << " Prime Number ";
    }
    else
    {
        cout << "Not An Prime Number";
    }
}
bool checkPrimeNum(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}