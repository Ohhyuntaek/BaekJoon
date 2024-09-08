#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    unsigned long long n, k;
    cin >> k >> n;

    unsigned long long max = 0;

    unsigned long long result = 0;
    vector<unsigned long long> lines;

    for (unsigned long long i = 0; i < k; i++)
    {
        unsigned long long a;
        cin >> a;

        if (a > max)
            max = a;

        lines.push_back(a);
    }

    unsigned long long from = 0;
    unsigned long long to = max;
    unsigned long long half = max;

    while (true)
    {
        unsigned long long count = 0;

        for (unsigned long long i = 0; i < lines.size(); i++)
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
