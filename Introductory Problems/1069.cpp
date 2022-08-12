// Repetitioins

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAXN = 1e6;

int main()
{
    // Maximum-length substring
    // ATTCGGGA --> 3(GGG)
    // 각각에 대해 배열? Time limit, 한글자에 대해 wrong answer
    string str;
    cin >> str;

    int arr[MAXN + 1];
    for (int i = 0; i < str.size(); i++)
    {
        int tmp = 1;
        for (int j = i + 1; j < str.size(); j++)
        {
            if (str[i] != str[j])
            {
                arr[i] = tmp;
                break;
            }
            tmp++;
            arr[i] = tmp;
        }
    }
    int max = arr[0];

    for (int i = 1; i < str.size() - 1; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << max << endl;
}