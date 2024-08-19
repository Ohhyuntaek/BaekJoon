#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int N, M;
int map[1001][1001];
int visited[1001][1001][2];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs() {
    queue<tuple<int, int, int>> q; // (x, y, 벽을 부쉈는지 여부)
    q.push({1, 1, 0});
    visited[1][1][0] = 1; // 시작점 방문 (벽을 부수지 않은 상태)
    
    while (!q.empty()) {
        int x, y, wall_broken;
        tie(x, y, wall_broken) = q.front();
        q.pop();
        
        if (x == N && y == M) {
            return visited[x][y][wall_broken]; // 목적지에 도착하면 최단 거리 반환
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 1 || nx > N || ny < 1 || ny > M) continue; // 맵 밖으로 나가면 무시
            
            if (map[nx][ny] == 0 && visited[nx][ny][wall_broken] == 0) {
                // 벽이 없는 경우
                visited[nx][ny][wall_broken] = visited[x][y][wall_broken] + 1;
                q.push({nx, ny, wall_broken});
            }
            
            if (map[nx][ny] == 1 && wall_broken == 0 && visited[nx][ny][1] == 0) {
                // 벽이 있는 경우, 벽을 부순 상태로 이동
                visited[nx][ny][1] = visited[x][y][wall_broken] + 1;
                q.push({nx, ny, 1});
            }
        }
    }
    
    return -1; // 도달 불가능한 경우
}

int main() {
    cin >> N >> M;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    
    cout << bfs() << endl;
    
    return 0;
}
