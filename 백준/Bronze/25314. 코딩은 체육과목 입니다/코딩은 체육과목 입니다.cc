#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = N / 4;  // N이 4의 배수이므로 N을 4로 나눈 값만큼 long이 필요

    for (int i = 0; i < count; i++) {
        cout << "long ";
    }
    cout << "int" << endl;

    return 0;
}
