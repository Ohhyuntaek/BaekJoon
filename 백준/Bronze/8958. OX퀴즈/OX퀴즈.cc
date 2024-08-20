#include <iostream>
#include <string>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string result;
        cin >> result;

        int score = 0;
        int consecutiveO = 0;

        for (char ch : result) {
            if (ch == 'O') {
                consecutiveO++;
                score += consecutiveO;
            }
            else {
                consecutiveO = 0;
            }
        }

        cout << score << endl;
    }

    return 0;
}
