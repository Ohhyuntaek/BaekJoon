#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int num = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
            if (s[i + 1] == ' ')
                num++;

        if (i == s.size() - 1)
            if (s[i] != ' ')
                num++;
    }

    cout << num << endl;

    return 0;
}
