#include <iostream>

using namespace std;

int main() {
    while (true) {
        int arr[3];

        // 세 개의 정수를 입력받는다.
        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        // 모든 입력이 0인 경우 종료
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
            break;
        }

        // 직각삼각형인지 검사
        if ((arr[0] * arr[0] == arr[1] * arr[1] + arr[2] * arr[2]) 
            || (arr[1] * arr[1] == arr[0] * arr[0] + arr[2] * arr[2]) 
            || (arr[2] * arr[2] == arr[1] * arr[1] + arr[0] * arr[0])) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}
