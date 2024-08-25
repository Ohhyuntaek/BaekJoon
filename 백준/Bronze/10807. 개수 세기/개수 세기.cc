#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 0;

    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int find;
    cin >> find;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == find)
            ans++;
    }

    cout << ans << endl;

    return 0;
}