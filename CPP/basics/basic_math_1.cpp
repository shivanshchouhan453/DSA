// Count digits in a number
#include <iostream>
using namespace std;
int main()
{
    int digitNum;
    int count = 0;

    cout << "Enter the Number : " << endl;
    cin >> digitNum;

    // if digitNum is zero return 1
    if (digitNum == 0)
    {
        count = 1;
    }

    while (digitNum != 0)
    {
        digitNum = digitNum / 10;
        count++;
    }
    cout << "Total Digit is : " << count;

    return 0;
}