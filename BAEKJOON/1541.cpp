#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string temp = "";
    int ans = 0;

    cin >> str;

    bool minus = false;
    for (int i = 0; i <= str.size(); i++)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0')
        {
            if (minus)
            {
                ans -= stoi(temp); // stoi = string to int
            }
            else
            {
                ans += stoi(temp);
            }
            temp = "";
            if (str[i] == '-')
            {
                minus = true;
            }
        }
        else
        {
            temp += str[i];
        }
    }
    cout << ans << endl;
}