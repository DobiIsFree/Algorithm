#include <iostream>
using namespace std;
const int MAXN = 100001;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[MAXN];
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        arr[i] = arr[i - 1] + k;
    }
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
}