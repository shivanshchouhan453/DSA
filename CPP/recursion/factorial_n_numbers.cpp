#include <iostream>
using namespace std;
int factN(int);
int main()
{
    int n;
    cout << "Enter N : ";
    cin >> n;

    int fact = factN(n);
    cout << "Factorial is : " << fact;

    return 0;
}

int factN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factN(n - 1);
}