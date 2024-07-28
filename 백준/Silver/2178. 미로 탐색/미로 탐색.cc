#include <iostream>
#include <queue>

using namespace std;

class node {
public:
	node() {}

	node(int x, int y, int value)
	{
		this->visited = false;
		this->x = x;
		this->y = y;
		this->value = value;
	}

	bool visited = false;
	int x, y;
	int value;

	void Init(int x, int y, int value)
	{
		this->visited = false;
		this->x = x;
		this->y = y;
		this->value = value;
	}
};

int main(void) {
	int x, y;
	string a;
	queue<node> q;
	cin >> x;
	cin >> y;

	node** arr = new node*[x];

	for (int i = 0; i < x; i++) {
		arr[i] = new node[y];
	}

	for (int i = 0; i < x; i++) {
		cin >> a;
		for (int j = 0; j < y; j++) {
			arr[i][j].Init(i, j, (int)a[j] - (int)'0');
		}
	}

	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		cout << arr[i][j].value;
	//	}
	//	cout << endl;
	//}

	q.push(arr[0][0]);
	arr[0][0].visited = true;

	int depth = 0;
	int curX, curY;

	while (!q.empty()) {
		int qSize = q.size();
		depth++;
		for (int i = 0; i < qSize; i++)
		{
			node cur = q.front();

			// 도착했을 경우
			if (cur.x == x - 1 && cur.y == y - 1)
			{
				cout << depth << endl;
				return 0;
			}

			q.pop();


			curX = cur.x;
			curY = cur.y + 1;
			if (curY < y && !(arr[curX][curY].visited) && arr[curX][curY].value != 0) {
				q.push(arr[curX][curY]);
				arr[curX][curY].visited = true;
			}
			curX = cur.x;
			curY = cur.y - 1;
			if (curY >= 0 && !(arr[curX][curY].visited) && arr[curX][curY].value != 0) {
				q.push(arr[curX][curY]);
				arr[curX][curY].visited = true;
			}
			curX = cur.x + 1;
			curY = cur.y;
			if (curX < x && !(arr[curX][curY].visited) && arr[curX][curY].value != 0) {
				q.push(arr[curX][curY]);
				arr[curX][curY].visited = true;
			}
			curX = cur.x - 1;
			curY = cur.y;
			if (curX >= 0 && !(arr[curX][curY].visited) && arr[curX][curY].value != 0) {
				q.push(arr[curX][curY]);
				arr[curX][curY].visited = true;
			}
		}
	}

	return 0;
}
