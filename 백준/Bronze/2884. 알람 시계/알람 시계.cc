#include <iostream>

using namespace std;

int main() {
    int h, m, m2;
    cin >> h >> m;

    m2 = m - 45;

    if (m2 < 0)
    {
        h -= 1;

        if (h < 0)
        {
            h += 24;
        }

        m = m2 + 60;
    }
    else 
    {
        m = m2;
    }

    cout << h << ' ' << m << endl;

    return 0;
}
