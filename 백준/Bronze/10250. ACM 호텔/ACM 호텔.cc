#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    int h, w, n, y, x;

    for (int i = 0; i < t; ++i)
    {
        cin >> h >> w >> n;

        x = n / h + 1;
        y = n % h;

        if (y == 0)
        {
            y = h;
            x -= 1;
        }
        printf("%d%02d\n", y, x);
    }

    return 0;
}
