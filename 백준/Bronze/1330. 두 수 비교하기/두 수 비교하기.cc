#include <iostream>

using namespace std;

int main(void) {
	int a, b;
	std::cin >> a;
	std::cin >> b;

	if (a > b) std::cout << ">" << endl;
	else if (a < b) std::cout << "<" << endl;
	else if (a == b) std::cout << "==" << endl;

	return 0;
}

