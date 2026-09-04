#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int number = 7789;
    int reverseNum = 0;
    vector<int> arr;

    // take out all the digits and put in vector
    while (number != 0)
    {
        int rem = number % 10;
        number = number / 10;
        arr.push_back(rem);
    }

    // pop out all items and calculate

    int iter = 1;
    while (arr.size() != 0)
    {
        int digit = arr[(arr.size() - 1)];
        arr.pop_back();
        reverseNum = reverseNum + digit * iter;
        iter = iter * 10;
    }

    cout << " Reverse Number is " << reverseNum;

    return 0;
}