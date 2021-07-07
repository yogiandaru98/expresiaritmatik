#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    string string1, string2;
    getline(cin, string1);
    for (int i = 0; i < string1.length(); i++)
    { //seleksi index string
        if (isdigit(string1[i]))
        {
            string2 += string1[i];
            if (!(isdigit(string1[i + 1])))
            {
                string2 += " ";
            }
        }
        else if (!(isdigit(string1[i])) && string1[i] != ' ')
        {
            string2 += string1[i];
            if (i == 0 && isdigit(string1[i + 1]) && string1[i] == '-')
            {
                string2 += "";
            }
            else if (string1[i] == '-' && string1[i + 1] == '(' && isdigit(string1[i - 2]))
            {
                string2 += "1 * ";
            }
            else if (string1[i] == '-' && isdigit(string1[i + 1]) && !(isdigit(string1[i - 1])))
            {
                string2 += "1 * ";
            }
            else if (string1[i] == '-' && string1[i - 2] != ')' && string1[i - 1] != ')' && string1[i + 1] == '(' && !(isdigit(string1[3 - 2])))
            {
                string2 += "1 * ";
            }
            else if (i == (string1.length()) - 1)
            {
                string2 += "";
            }
            else
            {
                string2 += " ";
            }
        }
    }
    cout << string2 << endl;
    return 0;
}