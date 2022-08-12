#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int n, ans = 0;
    cin >> n;
    // 3과 5로 적절하게 쪼개기?
    while (n >= 0)
    {
        // case 1 - 5로 모두 나눠짐
        if (n % 5 == 0)
        {
            ans += n / 5;
            cout << ans << endl;
            return 0;
        } // case 2 - 3kg 하나 빼고
        n -= 3;
        ans++;
    }
    // case 3 - 해결 불가
    cout << -1 << endl;
}