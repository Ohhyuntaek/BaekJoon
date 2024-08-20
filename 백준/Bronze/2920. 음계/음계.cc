#include <iostream>

using namespace std;

int main() {
    int* arr = new int[8];
    int checkAscending = 0;
    int checkDescending = 0;

    for (int i = 0; i < 8; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            checkAscending++;
        }
        if (arr[i] > arr[i + 1])
        {
            checkDescending++;
        }
    }

    if (checkAscending >= 7)
        cout << "ascending" << endl;
    else if (checkDescending >= 7)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;

    return 0;
}
