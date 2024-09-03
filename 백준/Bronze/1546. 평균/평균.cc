#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> points(n);

    for (int i = 0; i < n; i++)
        cin >> points[i];

    int maxPoint = *max_element(points.begin(), points.end());

    double totalPoint = 0;

    for (int i = 0; i < n; i++)
    {
        double newPoint = static_cast<double>(points[i]) / maxPoint * 100;
        totalPoint += newPoint;
    }

    double average = totalPoint / n;

    cout << average << "\n";

    return 0;
}
