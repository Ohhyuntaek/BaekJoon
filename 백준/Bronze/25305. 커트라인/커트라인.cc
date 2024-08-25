#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int k = 0;

    cin >> n >> k;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int temp;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << arr[k - 1] << endl;

    return 0;
}