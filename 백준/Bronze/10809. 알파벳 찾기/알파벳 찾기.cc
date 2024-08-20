#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> alphabet(26, -1);

    for (int i = 0; i < S.length(); i++) {
        int index = S[i] - 'a';
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    cout << endl;
    return 0;
}
