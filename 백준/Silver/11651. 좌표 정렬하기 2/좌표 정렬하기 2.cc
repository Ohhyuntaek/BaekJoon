#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<pair<int, int>> points(N);

    for (int i = 0; i < N; i++)
        cin >> points[i].first >> points[i].second;

    sort(points.begin(), points.end(), compare);

    for (int i = 0; i < N; i++)
        cout << points[i].first << " " << points[i].second << "\n";

    return 0;
}
