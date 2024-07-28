#include <iostream>

using namespace std;

int main(void) {
	int a;
	std::cin >> a;
	
	if ((((a % 4) == 0) && ((a % 100) != 0)) || ((a % 400) == 0)) std::cout << "1" << endl;
	else std::cout << "0" << endl;

	return 0;
}

