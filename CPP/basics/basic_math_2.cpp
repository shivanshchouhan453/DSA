#include <iostream>
#include <vector>
using namespace std;

// brute force approach
//

// optimize approach

int main()
{
    int reverseNum = 0;
    int number = 12345;

    while (number != 0)
    {
        int reminder = number % 10;
        reverseNum = reverseNum * 10 + reminder;
        number = number / 10;
    }
    cout << reverseNum;
    return 0;
}