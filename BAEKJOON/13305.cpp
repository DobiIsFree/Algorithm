#include <iostream>
using namespace std;
#define MAX 10000

int main()
{
    int n;
    cin >> n;

    long long dist[MAX];
    long long price[MAX];

    for (int i = 0; i < n - 1; i++)
        cin >> dist[i];

    for (int i = 0; i < n; i++)
        cin >> price[i];

    long long min = price[0];
    long long sum = min * dist[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (price[i + 1] <= min)
            min = price[i + 1];
        sum += min * dist[i + 1];
    }

    cout << sum << endl;
}
