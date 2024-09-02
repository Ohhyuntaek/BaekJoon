#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    int a = n;

    while (n--)
    {
        a += n;
    }

    cout << a << "\n";

    return 0;
}
