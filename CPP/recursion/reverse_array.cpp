#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int arr[] = {520, 35, 42, 40, 64, 45, 98, 68, 35};

    // swaping elements
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[(n - 1) - i];
        arr[(n - 1) - i] = arr[i];
        arr[i] = temp;
    }

    cout << "reverse array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}