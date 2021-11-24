#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    char ch;
    cout << "Enter char: ";
    cin >> ch;

    int number;
    cout << "Enter number: ";
    cin >> number;

    int result = 0;


    while (str.size() != number)
    {
        for (int i = 0; i < str.size(); i++)
        {
            if (str.size() < number)
            {
                str.push_back(str[i]);
            }
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            result++;
        }
    }

    cout << "Result = " << result << endl;

    return 0;
}

