#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    deque<int> deq;

    while (N--) {
        int command;
        cin >> command;

        if (command == 1) {
            int x;
            cin >> x;
            deq.push_front(x);
        } 
        else if (command == 2) {
            int x;
            cin >> x;
            deq.push_back(x);
        }
        else if (command == 3) {
            if (deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        }
        else if (command == 4) {
            if (deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        }
        else if (command == 5) {
            cout << deq.size() << "\n";
        }
        else if (command == 6) {
            cout << (deq.empty() ? 1 : 0) << "\n";
        }
        else if (command == 7) {
            if (deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.front() << "\n";
            }
        }
        else if (command == 8) {
            if (deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.back() << "\n";
            }
        }
    }

    return 0;
}
