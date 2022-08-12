#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, ans = 0;
    cin >> n;
    int k = 1000 - n;

    int a[] = {500, 100, 50, 10, 5, 1};
    // 큰 수부터
    for (int i = 0; i < 6; i++)
    {
        ans += k / a[i];
        k %= a[i];
    }

    cout << ans << endl;
}