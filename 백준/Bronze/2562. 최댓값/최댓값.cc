#include <iostream>

using namespace std;

int main() {
    int a[9];
    int num, max = 0;

    for (int i = 0; i < 9; i++)
    {
        int b;
        cin >> b;
        a[i] = b;
    }

    for (int i = 0; i < 9; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            num = i + 1;
        }
    }

    cout << max << endl;
    cout << num << endl;

    return 0;
}
