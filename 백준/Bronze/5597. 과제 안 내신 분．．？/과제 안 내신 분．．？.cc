#include <iostream>
using namespace std;

int main() {
    bool students[31] = { false };  // 1번부터 30번 학생을 기록할 배열, 0번 인덱스는 사용하지 않음

    // 28명의 제출한 학생 번호를 입력받아 기록
    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;
        students[num] = true;  // 해당 번호의 학생이 제출했음을 표시
    }

    // 제출하지 않은 학생 번호 출력
    for (int i = 1; i <= 30; i++) {
        if (!students[i]) {  // 제출하지 않은 학생 찾기
            cout << i << endl;
        }
    }

    return 0;
}
