#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    vector<int> results(T);

    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        results[i] = A + B;
    }

    for (int i = 0; i < T; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
