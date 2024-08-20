#include <iostream>
#include <vector>

using namespace std;

int main() {
    int num;
    cin >> num;

    vector<int> arr(num);

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        
        if (arr[i] < min)
            min = arr[i];
    }

    cout << min << " " << max << endl;

    return 0;
}
