#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, j;
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        j = a - i;
        for (int k = 0; k < j; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
