#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    vector<int> pocket;

    for (int i = 1; i <= n; i++)
    {
        pocket.push_back(i);
    }

    int temp = 0;

    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;

        temp = pocket[a-1];
        pocket[a-1] = pocket[b-1];
        pocket[b-1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << pocket[i] << " ";
    }

    return 0;
}
