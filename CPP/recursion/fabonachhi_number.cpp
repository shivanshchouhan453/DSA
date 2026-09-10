#include <iostream>
using namespace std;
int fabonachi(int);

int main()
{
    int n;

    cout << "Enter Num : ";
    cin >> n;

    int num = fabonachi(n);
    cout << "Fabo of n : " << num << endl;

    return 0;
}

int fabonachi(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    return fabonachi(n - 1) + fabonachi(n - 2);
}