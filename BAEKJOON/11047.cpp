#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, k, ans = 0;
    cin >> n >> k;
    // n개의 동전을 입력받는다
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 큰 수부터
    for (int i = n - 1; i >= 0; i--)
    {
        ans += k / a[i];
        k %= a[i];
    }

    cout << ans << endl;
}