#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string numbers;

    cin >> N;          // 숫자의 개수를 입력받습니다.
    cin >> numbers;    // 공백 없이 주어진 숫자들을 입력받습니다.

    int sum = 0;

    for (int i = 0; i < N; i++) {
        sum += numbers[i] - '0';  // 각 문자를 숫자로 변환하여 더합니다.
    }

    cout << sum << endl;  // 합을 출력합니다.

    return 0;
}
