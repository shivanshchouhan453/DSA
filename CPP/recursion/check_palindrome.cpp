#include <iostream>
#include <typeinfo>

using namespace std;
bool check_palindrome(string);
string clean_string(string);

int main()
{
    string str = "ab_a";

    str = clean_string(str);

    cout << str << endl;

    bool check = check_palindrome(str);

    if (check)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}

bool check_palindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;

    while (i <= j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

string clean_string(string s)
{

    string str;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        {
            // small letter converter -> for capital letter word
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + 32;
            }

            str.push_back(ch);
        }
    }
    return str;
}