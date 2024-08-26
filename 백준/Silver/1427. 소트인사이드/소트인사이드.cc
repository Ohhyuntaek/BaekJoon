#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a;
    cin >> a;

    vector<int> arr;

    while (a > 0)
    {
        int digit = a % 10;
        arr.insert(arr.begin(), digit);
        a /= 10;
    }

    sort(arr.begin(), arr.end(), compare);

    for (int i : arr)
        cout << i;

    return 0;
}
