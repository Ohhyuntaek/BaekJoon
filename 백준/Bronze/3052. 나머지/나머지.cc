#include <iostream>

using namespace std;

int main() {
    int* arr = new int[10];

    int num = 10;
    
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        arr[i] = a % 42;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                num--;
                break;
            }
        }
    }

    cout << num << endl;

    return 0;
}
