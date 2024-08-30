#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int n;
    cin >> n;

    queue<int> que;

    while (n--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int num;
            cin >> num;
            que.push(num);
        }
        else if (str == "pop")
        {
            if (que.empty())
                cout << -1 << "\n";
            else
            {
                cout << que.front() << "\n";
                que.pop();
            }
        }
        else if (str == "size")
        {
            cout << que.size() << "\n";
        }
        else if (str == "empty")
        {
            if (que.empty())
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else if (str == "front")
        {
            if (que.empty())
                cout << -1 << "\n";
            else
                cout << que.front() << "\n";
        }
        else if (str == "back")
        {
            if (que.empty())
                cout << -1 << "\n";
            else
                cout << que.back() << "\n";
        }
    }

    return 0;
}
