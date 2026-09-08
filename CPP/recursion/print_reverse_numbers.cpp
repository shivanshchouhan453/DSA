#include <iostream>
using namespace std;
void printRN(int);

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    printRN(num);
    return 0;
}

void printRN(int num)
{
    cout << num << ", ";

    if (num == 1)
    {
        return;
    }
    num--;
    printRN(num);
}