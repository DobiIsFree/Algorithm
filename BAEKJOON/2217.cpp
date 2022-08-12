#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int ans, temp = 0;
    long max = v[0];
    sort(v.rbegin(), v.rend()); // {27, 23, 15, 11, 3}
    for (int i = 1; i < n; i++)
    {
        temp = v[i] * (i + 1);
        if (max < temp)
            max = temp;
    }
    cout << max << endl;
}