#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> results;
    int A = 0, B = 0;
    bool check = false;

    while (true)
    {
        cin >> A >> B;
        if (A == 0 && B == 0)
        {
            break;
        }
        cout << A + B << endl;
    }

    return 0;
}
