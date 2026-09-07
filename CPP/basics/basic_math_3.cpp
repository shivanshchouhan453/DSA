// Greatest Common Divisor

#include <iostream>
using namespace std;
int main()
{
    int n1 = 5;
    int n2 = 20;
    int minimum = 0;
    int gcf = 1;
    int count = 0;

    // set minimum
    if (n1 < n2)
    {
        minimum = n1;
    }
    else
    {
        minimum = n2;
    }

    // iterate all minimum divisor  ==> iteration are too much
    // for (int i = 1; i <= minimum; i++)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         gcf = i;
    //     }
    //     count++;
    // }

    // iterate from high to low it reduce the iteration
    for (int i = minimum; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcf = i;
            break;
        }
        count++;
    }

    cout << "Greatest Common Factor is : " << gcf << endl;
    cout << count;
    return 0;
}