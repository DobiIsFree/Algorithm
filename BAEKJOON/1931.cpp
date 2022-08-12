#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n; // 회의의 개수

    // 가장 빨리 끝나는 것 선택
    vector<pair<int, int>> v;
    int start, end;
    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        v.push_back(make_pair(end, start));
    }
    sort(v.begin(), v.end());

    pair<int, int> current = v[0];
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        // 다음 회의를 고른다.
        if (v[i].second >= current.first)
        {
            ans++;
            current = v[i];
        }
    }
    cout << ans << endl;
}