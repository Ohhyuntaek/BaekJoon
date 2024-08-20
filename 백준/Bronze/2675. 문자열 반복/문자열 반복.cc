#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int num;
        string s;

        cin >> num >> s;

        for (int j = 0; j < s.size(); j++)
        {
            int k = 0;
            while (k < num)
            {
                cout << s[j];
                ++k;
            }
        }
        cout << endl;
    }

    return 0;
}
