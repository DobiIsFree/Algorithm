#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // 알파벳 배열 z
    int z[26] = {
        0,
    };
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 97) // 대문자인 경우! A=65, a=97
            z[s[i] - 65]++;
        else
            z[s[i] - 97]++;
    }
    int max = 0;
    char ans;
    for (int i = 0; i < 26; i++)
    {
        if (z[i] == max)
        {
            ans = '?';
        }
        else if (z[i] > max)
        {
            max = z[i];
            ans = 'A' + i;
        }
    }
    cout << ans << endl;

    // int max = 0, mi = 0, cnt = 0;
    // for (int i = 0; i < 26; i++)
    // {
    //     if (max < z[i])
    //     {
    //         max = z[i];
    //         mi = i;
    //     }
    // }
    // char ans;
    // // 가장 많이 사용된 알파벳 여러개?
    // for (int i = 0; i < 26; i++)
    // {
    //     if (max == z[i])
    //         cnt++;
    // }
    // if (cnt > 1)
    //     cout << '?' << endl;
    // else
    //     cout << (char)(mi + 65) << endl;
}