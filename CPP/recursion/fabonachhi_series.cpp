#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;

    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);

    int i = 2;
    int last = 0;
    int current = 1;

    while (i <= n)
    {
        int sum = current + last;
        arr.push_back(sum);
        last = current;
        current = sum;
        i++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}