#include <iostream>

using namespace std;

int main(void) {
	int a;
	std::cin >> a;
	
	if (a >= 90) std::cout << "A" << endl;
	else if ((a < 90) && (a >= 80)) std::cout << "B" << endl;
	else if ((a < 80) && (a >= 70)) std::cout << "C" << endl;
	else if ((a < 70) && (a >= 60)) std::cout << "D" << endl;
	else std::cout << "F" << endl;

	return 0;
}

