#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int pushCount = 1;
    bool flag = true;

    vector<char> result;

    stack<int> a;
    
    for (int i = 0; i < n; i++)
    {
        int inputNum;
        cin >> inputNum;

        while (inputNum >= pushCount)
        {
            a.push(pushCount);
            pushCount++;
            result.push_back('+');
        }

        if (inputNum != a.top())
            flag = false;

        a.pop();

        result.push_back('-');
    }

    if (flag)
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << "\n";
    else
        cout << "NO" << "\n";

    return 0;
}
