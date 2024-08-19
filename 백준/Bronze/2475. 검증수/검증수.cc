#include <iostream>

using namespace std;

int main(void)
{
    int a[6];
    int b[5];
    int c = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        b[i] = a[i] * a[i];
    }

    c = b[0] + b[1] + b[2] + b[3] + b[4];
    
    cout << c % 10 << endl;

    return 0;
}