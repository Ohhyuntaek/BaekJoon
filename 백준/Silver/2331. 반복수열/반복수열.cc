#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

int nextNumber(int num, int p) {
    int sum = 0;
    while (num > 0) {
        sum += pow(num % 10, p);
        num /= 10;
    }
    return sum;
}

int main() {
    int A, P;
    cin >> A >> P;

    unordered_map<int, int> visited;
    vector<int> sequence;

    int current = A;
    while (visited[current] == 0) {
        visited[current] = sequence.size() + 1;
        sequence.push_back(current);
        current = nextNumber(current, P);
    }

    int loopStart = visited[current] - 1;
    cout << loopStart << endl;

    return 0;
}
