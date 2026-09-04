#include <iostream>
#include <vector>
using namespace std;

// brute force approach
//

// optimize approach

int main()
{
    int reverseNum = 0;
    int number = -123;

    while (number != 0)
    {
        int reminder = number % 10;
        // cout << "RM : " << reminder << endl;
        reverseNum = reverseNum * 10 + reminder;
        // cout << "RS : " << reverseNum << endl;
        number = number / 10;
    }
    cout << reverseNum;

    if (reverseNum < INT32_MIN || reverseNum > INT32_MAX)
    {
        return 0;
    }
    else
    {
        return reverseNum;
    }
    return 0;
}