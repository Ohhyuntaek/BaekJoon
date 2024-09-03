#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int L;
    string s;
    cin >> L >> s;

    const int r = 31;
    const int M = 1234567891;
    long long hashValue = 0;
    long long rPower = 1;

    for (int i = 0; i < L; i++)
    {
        int charValue = s[i] - 'a' + 1;
        hashValue = (hashValue + charValue * rPower) % M;
        rPower = (rPower * r) % M;
    }

    cout << hashValue << "\n";

    return 0;
}
