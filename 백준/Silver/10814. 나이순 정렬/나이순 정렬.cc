#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}

int main() {
    int N;
    cin >> N;

    vector <pair<int, string>> members(N);

    for (int i = 0; i < N; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        members[i].first = age;
        members[i].second = name;
    }

    stable_sort(members.begin(), members.end(), compare);

    for (int i = 0; i < N; i++)
        cout << members[i].first << " " << members[i].second << "\n";

    return 0;
}
