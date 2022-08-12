#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n, compare);
    sort(b, b + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
    }

    cout << ans << endl;
}