#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> count(10001, 0); // 수의 범위는 1부터 10000까지

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}
