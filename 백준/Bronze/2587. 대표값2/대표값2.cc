#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int temp;
    int a = 0;
    int b = 0;

    int* arr = new int[5];

    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;

        sum += a;
    }

    for (int i = 5 - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    a = sum / 5;

    cout << a << endl;
    cout << arr[2] << endl;

    return 0;
}