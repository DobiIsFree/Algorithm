#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    // 공백 없이 쓰여져 있는 숫자 합 출력
    char a[n];
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        ans += ch - '0';
    }
    cout << ans << endl;
}