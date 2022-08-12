#include <iostream>

using namespace std;

int main()
{
    long long s;
    cin >> s;

    int cnt = 0;
    long long sum = 0, num = 1;
    while (1)
    {
        sum = sum + num;
        cnt++;
        if (sum > s)
        {
            cnt--;
            break;
        }
        num++;
    }
    cout << cnt << endl;
}