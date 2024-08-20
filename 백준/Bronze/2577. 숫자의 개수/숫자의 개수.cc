#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;

    int num = a * b * c;

    string s = to_string(num);

    for (int i = 0; i < s.size(); i++)
    {
        int num;
        num = s[i] - '0';

        switch (num)
        {
            case 0:
                num0++;
                break;
            case 1:
                num1++;
                break;
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 4:
                num4++;
                break;
            case 5:
                num5++;
                break;
            case 6:
                num6++;
                break;
            case 7:
                num7++;
                break;
            case 8:
                num8++;
                break;
            case 9:
                num9++;
                break;
        }
    }

    cout << num0 << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    cout << num6 << endl;
    cout << num7 << endl;
    cout << num8 << endl;
    cout << num9 << endl;

    return 0;
}
