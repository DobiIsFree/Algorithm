#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans;

    if (a == b && b == c)
    {
        ans = 10000 + a * 1000;
    }
    else if (a == b || a == c)
    {
        ans = 1000 + a * 100;
    }
    else if (b == c)
    {
        ans = 1000 + b * 100;
    }
    else
    {
        ans = max(max(a, b), c) * 100;
    }

    cout << ans << endl;
}