#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (i == b - 1)
        {
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}
