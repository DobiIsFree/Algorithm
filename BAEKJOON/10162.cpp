#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c = 0;
    if (t % 10 != 0)
        cout << "-1" << endl;
    else
    {
        a = t / 300;
        b = (t % 300) / 60;
        c = ((t % 300) % 60) / 10;
        cout << a << " " << b << " " << c << endl;
    }
}