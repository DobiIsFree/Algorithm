#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, ans = 0;
    cin >> n;
    // 배열 생성, 입력
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // 정렬
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
}