#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b, int gcdValue)
{
    return (a * b) / gcdValue;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int gcdValue = gcd(a, b);
    int lcmValue = lcm(a, b, gcdValue);

    cout << gcdValue << " " << lcmValue << "\n";

    return 0;
}
