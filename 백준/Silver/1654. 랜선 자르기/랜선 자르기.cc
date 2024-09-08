#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    unsigned int n, k;
    cin >> k >> n;

    unsigned int max = 0;

    unsigned int result = 0;
    vector<unsigned int> lines;

    for (unsigned int i = 0; i < k; i++)
    {
        unsigned int a;
        cin >> a;

        if (a > max)
            max = a;

        lines.push_back(a);
    }

    unsigned int from = 0;
    unsigned int to = max;
    unsigned int half = max;

    while (true)
    {
        unsigned int count = 0;

        for (unsigned int i = 0; i < lines.size(); i++)
            count += lines[i] / half;

        if (count < n)
        {
            to = half;
        }

        else
        {
            result = from;
            if (from == half)
            {
                from = half;
                break;
            }

            from = half;
        }

        if (to == from)
        {
            result = from;
            break;
        }
        half = (from + to) / 2;
    }

    cout << result;

    return 0;
}
