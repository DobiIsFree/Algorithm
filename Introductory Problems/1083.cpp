// Missing Number

#include <iostream>
using namespace std;

int main()
{
    // first input: integer n
    int a, n;
    cin >> n;
    int arr[n + 1];
    // second input: n-1 numbers
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a;
        arr[a] = a;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i)
            cout << i << endl;
    }
}