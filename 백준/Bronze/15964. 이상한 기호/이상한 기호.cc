#include <iostream>

using namespace std;

int strange(int a, int b)
{
    return (a + b) * (a - b);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    int c = 0;
    c = strange(a, b);
    
    cout << c << "\n";

    return 0;
}
