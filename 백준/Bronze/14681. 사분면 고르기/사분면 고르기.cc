#include <iostream>

using namespace std;

int main(void) {
	int x, y;
	std::cin >> x;
	std::cin >> y;

	if (x > 0 && y > 0) std::cout << "1" << endl;
	else if (x < 0 && y > 0) std::cout << "2" << endl;
	else if (x < 0 && y < 0) std::cout << "3" << endl;
	else if (x > 0 && y < 0) std::cout << "4" << endl;

	return 0;
}

