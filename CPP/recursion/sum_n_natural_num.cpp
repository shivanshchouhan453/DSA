#include <iostream>
using namespace std;
int sumN(int);
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int sum = sumN(n);
    cout << "Sum Is : " << sum;

    return 0;
}

int sumN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumN(n - 1);
}