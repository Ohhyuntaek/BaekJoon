#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num[3];
    int price = 0;
    int high = 0;
    cin >> num[0] >> num[1] >> num[2];

    if (num[0] == num[1] && num[1] == num[2])
    {
        price = 10000 + num[0] * 1000;
    }
    else
    {
        if ((num[0] == num[1]) && (num[0] != num[2]))
        {
            price = 1000 + num[0] * 100;
        }
        else if (num[0] == num[2] && (num[0] != num[1]))
        {
            price = 1000 + num[0] * 100;
        }
        else if (num[1] == num[2] && (num[0] != num[1]))
        {
            price = 1000 + num[1] * 100;
        }
        else if (num[0] != num[1] && num[1] != num[2])
        {
            for (int i = 0; i < 3; i++)
            {
                if (high < num[i])
                {
                    high = num[i];
                }
            }

            price = high * 100;
        }
    }

    cout << price << endl;

    return 0;
}
