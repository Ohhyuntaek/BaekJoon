#include <iostream>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int num = 0;
        cin >> num;

        if (num == 0)
            break;

        vector<int> digits;

        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            digits.push_back(digit);
            temp /= 10;
        }

        bool isPalindrome = true;
        int size = digits.size();

        for (int i = 0; i < size / 2; i++) {
            if (digits[i] != digits[size - i - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }

    return 0;
}
