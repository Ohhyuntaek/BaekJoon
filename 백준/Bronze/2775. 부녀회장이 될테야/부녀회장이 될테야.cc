#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;  // 테스트 케이스 수
    cin >> T;

    while (T--) {
        int k, n;
        cin >> k >> n;

        // 0층부터 k층까지의 아파트 거주자 수를 저장할 2차원 배열
        vector<vector<int>> apt(k + 1, vector<int>(n + 1, 0));

        // 0층의 i호에는 i명이 산다
        for (int i = 1; i <= n; i++) {
            apt[0][i] = i;
        }

        // 각 층의 각 호에 대해 거주자 수 계산
        for (int i = 1; i <= k; i++) {  // 1층부터 k층까지
            for (int j = 1; j <= n; j++) {  // 1호부터 n호까지
                for (int x = 1; x <= j; x++) {  // 아래층의 1호부터 j호까지의 합
                    apt[i][j] += apt[i - 1][x];
                }
            }
        }

        // k층 n호의 거주자 수 출력
        cout << apt[k][n] << endl;
    }

    return 0;
}
