#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long shirtSizes[6];
    long long T, P;

    for (int i = 0; i < 6; i++) {
        cin >> shirtSizes[i];
    }

    cin >> T >> P;

    long long totalBundles = 0;
    for (int i = 0; i < 6; i++) {
        totalBundles += (shirtSizes[i] + T - 1) / T;
    }

    long long penBundles = N / P;
    long long remainingPens = N % P;

    cout << totalBundles << endl;
    cout << penBundles << " " << remainingPens << endl;

    return 0;
}
