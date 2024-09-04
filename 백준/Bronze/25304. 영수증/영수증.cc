#include <iostream>

using namespace std;

int main() {
    int X, N;
    cin >> X;
    cin >> N;

    int total = 0;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        total += a * b;
    }

    if (total == X) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
