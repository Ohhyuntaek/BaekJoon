#include <iostream>

using namespace std;

long long strange(long long a, long long b)
{
    return (a + b) * (a - b);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;

    long long c = 0;
    c = strange(a, b);
    
    cout << c << "\n";

    return 0;
}
