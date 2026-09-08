#include <iostream>
using namespace std;
void printN(int, int);

int main()
{
    int n;
    cout << " Enter N :";
    cin >> n;

    // call the function
    printN(1, n);

    return 0;
}

void printN(int num, int n)
{
    // job
    cout << num << ", ";

    // base condition
    if (num == n)
    {
        return;
    }
    num++;

    // call
    printN(num, n);
}