#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>

using namespace std;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<int>> dist(n, vector<int>(n, INT_MAX));

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < n; j++) {
            grid[i][j] = line[j] - '0';
        }
    }

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    pq.push({0, 0, 0}); // {바꾼 방의 수, x, y}
    dist[0][0] = 0;

    while (!pq.empty()) {
        auto [changeCount, x, y] = pq.top();
        pq.pop();

        if (x == n-1 && y == n-1) {
            cout << changeCount << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                int nextChangeCount = changeCount + (grid[nx][ny] == 0 ? 1 : 0);
                if (nextChangeCount < dist[nx][ny]) {
                    dist[nx][ny] = nextChangeCount;
                    pq.push({nextChangeCount, nx, ny});
                }
            }
        }
    }

    return 0;
}
