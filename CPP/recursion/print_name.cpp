// Print Number N times using recursion
#include <iostream>
using namespace std;
void printName(int, string);

int main()
{
    int n;
    string name;
    cout << "Enter N Times :";
    cin >> n;

    cout << "Enter Name :";
    cin >> name;

    // print num function call
    printName(n, name);
    return 0;
}

void printName(int num, string name)
{
    cout << name << endl;
    num--;

    if (num == 0)
    {
        return;
    }
    printName(num, name);
}